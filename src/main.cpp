#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 */

#define FSR_PIN A0

int fsrValue = 0;
int threshold = 200;

void setup() {
    Serial.begin(9600);
    Serial.println("FSR Force Measurement System - Initialized");
    delay(1000);
}

void loop() {
    fsrValue = analogRead(FSR_PIN);

    Serial.print("FSR Value: ");
    Serial.println(fsrValue);

    // Threshold logic to detect physical interaction
    if (fsrValue > threshold) {
        Serial.println("Status: Pressure Detected");
    } else {
        Serial.println("Status: No Significant Pressure");
    }

    Serial.println("-----------------------------");
    delay(1000);
}