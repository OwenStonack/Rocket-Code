void setup( ){
  Serial.begin(9600);
  pinMode(10, OUTPUT);

  //do countdown
  for(int i = 10; i > 0; i--){
      Serial.println(i);
      delay(1000);
  }

  //fire the motor
  digitalWrite(10, HIGH);
  delay(5000);
  digitalWrite(10, LOW);
}

//ooo my new test comment
void loop(){
  
}