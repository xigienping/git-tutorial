//This code serves as a library file 
//#NOMICROSLOP
#include <Arduino.h>
#include "Blink.h"
Blink::Blink(int pinNum){
    _pin = pinNum;
    pinMode(pinNum, OUTPUT);
}
void Blink::now(void){
    digitalWrite(_pin,HIGH);
    delay(_timeBetweenOnOffMillis);
    digitalWrite(_pin,LOW);
    delay(_timeBetweenOnOffMillis);
}