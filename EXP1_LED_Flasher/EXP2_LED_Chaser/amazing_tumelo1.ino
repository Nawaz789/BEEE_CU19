void setup()
{
  int i;
  for(i=1;i<6;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  int i;
  for(i=1;i<6;i++)
  {
    if(i!=5)
    {
     digitalWrite(i, HIGH);
     digitalWrite(i+1, HIGH);
     delay(300); // Wait for 1000 millisecond(s)
     digitalWrite(i, LOW);
     digitalWrite(i+1, LOW);
     delay(300); // Wait for 1000 millisecond(s)
    }
    else
    {
     digitalWrite(i, HIGH);
     digitalWrite(i-4, HIGH);
     delay(300); // Wait for 1000 millisecond(s)
     digitalWrite(i, LOW);
     digitalWrite(i-4,LOW);
     delay(300); // Wait for 1000 millisecond(s)
    }
      
  }
}