// C++ code
# include <Servo.h>
Servo servo_11;
int Button = 0;
int StorageButton = 0;
void setup(){
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
  servo_11.attach(11,500,2500);
}

void loop(){
  Button = digitalRead(12);
  if(Button == HIGH){
    if(StorageButton == HIGH){
      digitalWrite(13, LOW);
      StorageButton = LOW;
    } else {
      digitalWrite(13, HIGH);
      StorageButton = HIGH;
    }
    delay(10);
  }
  if(StorageButton == HIGH){
    servo_11.write(180);
  } else {
    servo_11.write(0);
  }
  delay(200);
}
