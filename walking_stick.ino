int buzzer = 9;

#include <Ultrasonic.h>

Ultrasonic ultrasonic(12,11);

void setup() {
  Serial.begin(9600); 
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  int distance = ultrasonic.Ranging(CM);
  if (distance<50){
   int dil = 2*distance;

   digitalWrite(buzzer,HIGH);
   delay(dil);
   digitalWrite(buzzer,LOW);
   delay(dil);
  }
}
