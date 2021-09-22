#include<string.h>
// Motor A Input
 int enA=13;
 int in1=12;
 int in2=14;

void setup() {
  Serial.begin(115200);
  // Pinmode is set either as output or input
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  String receivedData;
  while (Serial.available())
  {
     receivedData = Serial.readString();
     if (receivedData == "A")
     {
        // Motor A Clockwise direction rotation
          digitalWrite(enA, HIGH);
          digitalWrite(in1, HIGH);
          digitalWrite(in2, LOW);
          delay(1000);
          Serial.print("Received clockwise signal");
     }
   
//     else if(receivedData== "A")
//      {
//        // Motor A Anti-Clockwise diretion rotation
//          digitalWrite(enA, HIGH);
//          digitalWrite(in1, LOW);
//          digitalWrite(in2, HIGH);
//          Serial.print("Received anticlockwise signal");
//     }
//     else if (receivedData == "O")
//     {
//          // Motor A is switched off
//          digitalWrite(enA, LOW);
//          digitalWrite(in1, LOW);
//          digitalWrite(in2, LOW);
//          Serial.print("Received Off  signal");
//     }
     else{
           // Returning Invalid input 
//           Serial.print("Invalid input enter 'C' (or) 'A' (or) 'O' ");
            digitalWrite(enA, LOW);
        digitalWrite(in1, LOW);
         digitalWrite(in2, LOW);
        }

  }
}
