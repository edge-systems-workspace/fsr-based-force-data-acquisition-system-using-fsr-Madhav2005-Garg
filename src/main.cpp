#include <Arduino.h>

#define FSR_PIN A0

int fsrValue = 0;
int threshold = 200; // ADC trigger point

// ... definitions from previous commit ...

void setup() {
    Serial.begin(9600);
    Serial.println("FSR Force Measurement System - Initialized");
    delay(1000);
}

// ... setup from previous commit ...

void loop() {
    // Read analog value from FSR (0 - 1023)
    fsrValue = analogRead(FSR_PIN);

    Serial.print("FSR Value: ");
    Serial.println(fsrValue);

    delay(1000); // Sampling rate
}