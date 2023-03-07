void setup(){
  Serial.begin(115200);
  Serial.println("Starting SHARP ToF Sensor...");
  delay(1000);
  pinMode(A0,INPUT);
}

void loop(){
  int vol = analogRead(A0);

  float dist = vol * 0.0048828125;
  dist = 40/(dist - 0.2);
  
  Serial.print(dist);
  Serial.println("cm");

  delay(10);
}
