void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(100); 
  digitalWrite(13, LOW);
  delay(100); 
  
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(11, LOW);
  delay(100); 
  
  digitalWrite(9, HIGH);
  delay(100); 
  digitalWrite(9, LOW);
  delay(100); 
  
  digitalWrite(11, HIGH);
  delay(100); 
  digitalWrite(11, LOW);
  delay(100); 
}
