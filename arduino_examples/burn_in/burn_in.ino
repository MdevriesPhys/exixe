#include <Wire.h>
#include "exixe.h"

exixe tubeSelect=exixe(2);

void setup() {
  // put your setup code here, to run once:
  tubeSelect.spi_init();
  tubeSelect.clear();
    // Clear LEDs
  tubeSelect.set_led(0, 0, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  tubeSelect.set_led(0, 0, 0);
  tubeSelect.show_digit(1,127,1);
  delay(250);

  tubeSelect.set_led(0, 0, 0);
  tubeSelect.show_digit(2,127,1);
  delay(250);

  tubeSelect.set_led(0, 0, 0);
  tubeSelect.show_digit(3,127,1);
  delay(250);

  tubeSelect.set_led(0, 0, 0);
  tubeSelect.show_digit(5,127,1);
  delay(250);

  tubeSelect.set_led(0, 0, 0);
  tubeSelect.show_digit(7,127,1);
  delay(250);

  tubeSelect.set_led(0, 0, 0);
  tubeSelect.show_digit(8,127,1);
  delay(250);

  tubeSelect.set_led(0, 0, 0);
  tubeSelect.show_digit(9,127,1);
  delay(250);

  tubeSelect.set_led(0, 0, 0);
  tubeSelect.show_digit(0,127,1);
  delay(250);
}