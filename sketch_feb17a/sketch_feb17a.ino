int convertValue;
int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  convertValue = analogRead(A0);
  Serial.println(convertValue);
  
  analogWrite(ledPin, map(convertValue, 0, 1023, 255, 0));
 
}
