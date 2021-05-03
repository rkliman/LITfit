# LITfit
A wearable music visualizer with built in haptics. This project is built using 2 Seeeduino Xiaos and runs nearly 600 NeoPixel LEDs.

## Contributors
Randall Kliman
Guruganesh Rajaraman

## Project Structure
The project is split into 2 Arduino projects due to having 2 Arduinos. The first project is in the `ECE4180_FinalProj` folder which contains `ECE4180_FinalProj.ino`. This code is used for the arduino connected to the 8x8 NeoPixel grid. The second project is in the `ledgrid` folder which contains `ledgrid.ino`. This code is used for the arduino connected to the belt and jacket LEDs.

## Parts List
- 2x Seedunio XIAO
- 6x [Haptic Motors](https://www.amazon.com/gp/product/B07Q1ZV4MJ/ref=ppx_yo_dt_b_asin_title_o04_s00?ie=UTF8&psc=1)
- 1x [Haptic Motor Driver](https://www.adafruit.com/product/2305)
- 2x Speakers
- 1x [Class D Audio Amp](https://www.sparkfun.com/products/11044)
- 1x [TRRS 3.5mm Jack Breakout](https://www.sparkfun.com/products/11570)
- 1x [8x8 Neopixel Grid](https://www.amazon.com/gp/product/B01MCUOD8N/ref=ppx_yo_dt_b_asin_title_o04_s00?ie=UTF8&psc=1)
- 528x [Neopixel LEDs (480 Jacket + 48 Belt)](https://www.amazon.com/gp/product/B01CDTEJBG/ref=ppx_yo_dt_b_asin_title_o04_s00?ie=UTF8&psc=1) (Note: These are arranged in a 16x30 grid using 16 LED long strips)
- 1x [10000mAh Power Bank](https://www.amazon.com/gp/product/B07H5759NR/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1)


## Dependencies
These libraries are needed to run the code, they can be added via the Arduino library manager

- arduinoFFT
- FastLED
- FASTLED_NeoMatrix
- Wire.h

## Circuit Diagram
Currently 2 Seeeduino Xiaos are needed to run both the belt and the jacket. This is due to speed constraints from writing to the LEDs. In the future, only one Xiao may be needed.
![LITFit_bb](https://user-images.githubusercontent.com/67759534/116934638-3a847180-ac33-11eb-8b09-79ad2933950b.png)

## Pictures
### Front

<img src="https://user-images.githubusercontent.com/67759534/116935212-09f10780-ac34-11eb-830c-39a3c5612909.jpg" width="400"/>

### Back

<img src="https://user-images.githubusercontent.com/67759534/116934733-59830380-ac33-11eb-8b60-180da0d7dc5b.jpg" width="400"/>



## Demonstration

https://www.youtube.com/watch?v=5xZX5TJwm8w
