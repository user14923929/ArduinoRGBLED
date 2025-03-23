# ArduinoRGBLED Library

The `ArduinoRGBLED` library provides an easy way to control RGB LEDs using Arduino. It allows you to initialize the RGB LED pins and set the color by specifying red, green, and blue intensity values.

## Features
- Initialize RGB LED pins.
- Set RGB LED colors using PWM values.

## Installation
1. Copy the `ArduinoRGBLED` folder to your Arduino libraries directory.
2. Restart the Arduino IDE.
3. Include the library in your sketch using `#include <ArduinoRGBLED.h>`.

## Usage

### Example
```cpp
#include <ArduinoRGBLED.h>

ArduinoRGBLED rgbLed;

void setup() {
    rgbLed.init(9, 10, 11); // Initialize RGB LED on pins 9, 10, and 11
}

void loop() {
    rgbLed.setColor(255, 0, 0); // Set color to red
    delay(1000);
    rgbLed.setColor(0, 255, 0); // Set color to green
    delay(1000);
    rgbLed.setColor(0, 0, 255); // Set color to blue
    delay(1000);
}
```

## API Reference

### `void init(int redPin, int greenPin, int bluePin)`
Initializes the RGB LED pins.

- `redPin`: Pin connected to the red LED.
- `greenPin`: Pin connected to the green LED.
- `bluePin`: Pin connected to the blue LED.

### `void setColor(int red, int green, int blue)`
Sets the color of the RGB LED using PWM values.

- `red`: Intensity of the red LED (0-255).
- `green`: Intensity of the green LED (0-255).
- `blue`: Intensity of the blue LED (0-255).

## License
This library is open-source and available under the MIT License.  