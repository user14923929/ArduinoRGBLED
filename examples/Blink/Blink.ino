#include <ArduinoRGBLED.h>          // Include the ArduinoRGBLED library
                                    //
ArdinoRGBLED led;                   // Create an instance of the ArdinoRGBLED class
                                    //
void setup() {                      //
  led.init(3, 5, 6);                // Initialize the RGB LED with pins 3, 5, and 6
}                                   //
                                    //
void loop() {                       //
    led.setColor(255, 0, 0);        // Set the color to red
    delay(1000);                    // Wait for 1 second
    led.setColor(0, 255, 0);        // Set the color to green
    delay(1000);                    // Wait for 1 second
    led.setColor(0, 0, 255);        // Set the color to blue
    delay(1000);                    // Wait for 1 second
}                                   // 
/**************************************************************************************
 * This example demonstrates how to use the ArdinoRGBLED library to control an RGB LED.
 * The RGB LED is connected to pins 3, 5, and 6 of the Arduino board.
    * The LED will change colors every second.
    * The setColor() method is used to set the color of the LED.
    * The init() method is used to initialize the RGB LED with the pins.
 * For more information, refer to the ArdinoRGBLED library documentation.
 **************************************************************************************/