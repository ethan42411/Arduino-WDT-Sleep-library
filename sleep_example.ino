#include "Sleeper.h"

Sleeper g_sleeper;

// Initialisation code
void setup(void) {
    //Open Serial port
    Serial.begin(9600);
    
    //Setting the 13 pin (LED) mode is OUTPUT.
    pinMode(13,OUTPUT);
    
    //Turn off the LED
    digitalWrite(13,LOW);
    
    //Send message to Serial port
    Serial.println("Setup done.");
}

// Main loop
void loop(void) {
    //-------------- Do when Wake Up Start ----------------//
    //Send message to Serial port
    Serial.print("Total milliseconds awake: ");
    Serial.println(millis());
    
    //Turn on the LED
    digitalWrite(13,HIGH);
    
    //Wait 0.1s
    delay(100);
    
    //Turn on the LED
    digitalWrite(13,LOW);
    //-------------- Do when Wake Up End -----------------//
    
  // Power down for 3 seconds.
  g_sleeper.SleepMillis(3000);
}
