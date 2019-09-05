void setup()
{
  pinMode(8, OUTPUT);
 
}

void loop()
{
  digitalWrite(8, HIGH);

  delay(200);//Wait for 200 milliseconds
  digitalWrite(8, LOW);
  delay(200);// wait for 200 milliseconds
}