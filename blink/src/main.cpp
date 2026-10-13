#include <Arduino.h>
#include "Blink.h"
Blink blink(2);

void setup() {

}

void loop() {
blink.now();
}