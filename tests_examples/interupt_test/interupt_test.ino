const int a = 145;
const byte interruptPin = 2;

void setup()
{    
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), test, CHANGE);
}
void loop()
{
  Serial.println(2);
  delay(1000);
}
 

void test()
{
  // vypne přerušení na pinu 2
  detachInterrupt(digitalPinToInterrupt(interruptPin));
 
  if (digitalRead(13) == LOW) digitalWrite(13, HIGH);
  else digitalWrite(13, LOW);
  // počkáme
  Serial.println(a);
  delay(3000);
  attachInterrupt(digitalPinToInterrupt(interruptPin), test, CHANGE);
}
