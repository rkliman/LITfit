#include <arduinoFFT.h>
#include <FastLED.h>
#include <FastLED_NeoMatrix.h>
#include <Wire.h>
#include "LedMap.h"

#define SAMPLES 64        // Must be a power of 2
#define MIC_IN  1         // Use A0 for mic input
#define BELT_PIN    6     // Data pin to LEDS
#define JACKET_PIN  5
#define N_BELT_LEDS    48
#define N_JACKET_LEDS  480  
#define BRIGHTNESS  40    // LED information 
#define LED_TYPE    WS2811
#define COLOR_ORDER RGB 

CRGB belt[N_BELT_LEDS]; 
CRGB jacket[N_JACKET_LEDS];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(MIC_IN, INPUT);
  FastLED.addLeds<LED_TYPE, BELT_PIN, COLOR_ORDER>(belt, N_BELT_LEDS).setCorrection( TypicalLEDStrip ); //Initialize LED strips
  FastLED.addLeds<LED_TYPE, JACKET_PIN, COLOR_ORDER>(jacket, N_JACKET_LEDS).setCorrection( TypicalLEDStrip ); //Initialize LED strips

}

int vol;
int hue = 0;
void loop() {
  // put your main code here, to run repeatedly:
  fadeToBlackBy(jacket, N_JACKET_LEDS, 80);
  Serial.println(vol);
  volumeter(vol);
  belt_rainbow(hue);
  
  
  delay(15);
  FastLED.show();
}

void volumeter() {
  int vol = analogRead(MIC_IN);
  vol = map(vol,0, 255, 0, 29)/2;
  for(int j = 0; j < 16; j++) {
    for(int i = 29; i >=(30-vol); i--) {
       jacket[XY(j, i)] = CHSV(hue,255, BRIGHTNESS);
    }
  }
}

void belt_rainbow(int neo_hue) {
  for(int i = 0; i < N_BELT_LEDS; i++) {
    belt[i] = CHSV((neo_hue),255,150);
  }
  hue = (hue+1)%255;
}
