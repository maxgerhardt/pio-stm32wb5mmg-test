#include <Arduino.h>

#define LED LED_BUILTIN // is "LD4" LED on PA7

void setup() {
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
}

void loop() {
    Serial.println("Blinky!");
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
}