#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Abhijeet Lalsantania
 * @date 21-02-2026
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

const uint8_t touchPin = 2;
int touchState = 0;

void setup() {
    Serial.begin(9600);
    pinMode(touchPin, INPUT);
    Serial.println("=== TTP223 Touch Detection System Initialized ===");
}

void loop() {
 
    touchState = digitalRead(touchPin);

    if(touchState == HIGH){
        Serial.println("Touch Detected");
    }else{
        Serial.println("No Touch");
    }
    delay(300);
}
