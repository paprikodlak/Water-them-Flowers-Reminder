const int ledPin =  13;    

int ledState = HIGH;           
long previousMillis = 0;        
 
void setup() {
  pinMode(ledPin, OUTPUT);      
}
 
void loop()
{
  unsigned long currentMillis = millis();
  
  digitalWrite(ledPin, ledState);
  delay(1000);
  ledState = LOW;
  digitalWrite(ledPin, ledState);

  if(currentMillis>23*3600*1000 ) {
      ledState = HIGH;
    digitalWrite(ledPin, ledState);
  }
}
