// Example usage for Adafruit_SSD1306 library by Adafruit (original), Brandon Satrom <brandon@particle.io> (library port).

#include "Adafruit_SSD1306.h"

// Initialize objects from the lib
Adafruit_SSD1306 adafruit_SSD1306;

void setup() {
    // Call functions on initialized library objects that require hardware
    adafruit_SSD1306.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    adafruit_SSD1306.process();
}
