//const int led0 = 13;
//const int led1 = 12;
//const int led2 = 11;
//const int led3 = 10;
//const int led4 = 9;
//const int led5 = 8;
//
//void setup(){
//pinMode(led1, OUTPUT);
//pinMode(led2, OUTPUT);
//pinMode(led3, OUTPUT);
//pinMode(led4, OUTPUT);
//pinMode(led5, OUTPUT);
//}
//
//void loop(){
//  digitalWrite(led0, HIGH);
//  
//  digitalWrite(led1, HIGH);
//  digitalWrite(led2, LOW);
//  digitalWrite(led3, LOW);
//  digitalWrite(led4, LOW);
//  digitalWrite(led5, LOW);
//  delay(500);
//  digitalWrite(led1, LOW);
//  digitalWrite(led2, HIGH);
//  digitalWrite(led3, LOW);
//  digitalWrite(led4, LOW);
//  digitalWrite(led5, LOW);
//  delay(500);
//  digitalWrite(led1, LOW);
//  digitalWrite(led2, LOW);
//  digitalWrite(led3, HIGH);
//  digitalWrite(led4, LOW);
//  digitalWrite(led5, LOW);
//  delay(500);
//  digitalWrite(led1, LOW);
//  digitalWrite(led2, LOW);
//  digitalWrite(led3, LOW);
//  digitalWrite(led4, HIGH);
//  digitalWrite(led5, LOW);
//  delay(500);
//  digitalWrite(led1, LOW);
//  digitalWrite(led2, LOW);
//  digitalWrite(led3, LOW);
//  digitalWrite(led4, LOW);
//  digitalWrite(led5, HIGH);
//  delay(500);
//  digitalWrite(led0, LOW);
//  digitalWrite(led1, LOW
//  );
//  digitalWrite(led2, LOW);
//  digitalWrite(led3, LOW);
//  digitalWrite(led4, LOW);
//  digitalWrite(led5, LOW);
//  delay(500);
//}

int motorPin = 3;

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
   digitalWrite(motorPin, HIGH);
   delay(500);
   digitalWrite(motorPin, LOW);
   delay(1000);
}
