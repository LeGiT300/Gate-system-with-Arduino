#include <IRremote.h>
#include <Servo.h>

Servo servo;

#define IR_RECEIVE_PIN 8
int Spin = 7;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
  servo.attach(Spin);
}

void loop() {
  if(IrReceiver.decode()){
    IrReceiver.resume();
    int command = IrReceiver.decodedIRData.command;
    Serial.println(command);
    
    if(command == 8){
      for(int i = 0; i < 180; i++){
        servo.write(i);
        delay(200);
      }
    }
    if(command == 9){
      for(int i = 180; i > 0; i--){
        servo.write(i);
        delay(200);
      }
    }
  }
  
}
