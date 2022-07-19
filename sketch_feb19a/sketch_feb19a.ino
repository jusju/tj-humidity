int buttonPin = 12;
int buzzerPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin) == HIGH) { // Not pressed
    //Serial.println("not pressed");
    digitalWrite(buzzerPin, LOW);
  } else {
    //Serial.println(" pressed");
    digitalWrite(buzzerPin, HIGH);
  }
}
