#include <Arduino.h>

// put function declarations here:
void setup(){
  pinMode(14,OUTPUT); // Initialisiert Pin 14 (LED1) als output .
}

void loop(){
  digitalWrite(14,HIGH);  //LED1 an
  delay(1000);      //1000ms warten
  digitalWrite(14,LOW);    //LED1 aus
  delay(1000);    //1000ms warten

}

