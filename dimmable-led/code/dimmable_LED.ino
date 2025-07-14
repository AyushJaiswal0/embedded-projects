int ledPin = 9;
int BbuttonPin = 12;
int DbuttonPin = 2;
int buzzerPin = 4;
int BbuttonRead;
int DbuttonRead;
int bdt = 500;
int dt = 200;
int bright = 0;
int brightFactor = 30;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(BbuttonPin, INPUT);
  pinMode(DbuttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  BbuttonRead = digitalRead(BbuttonPin);
  DbuttonRead = digitalRead(DbuttonPin);
  if(BbuttonRead == 0)
  {
    bright = bright + brightFactor;
  }
  if(DbuttonRead == 0)
  {
    bright = bright - brightFactor;
  }
  if(bright < 0)
  {
    bright = 0;
    digitalWrite(buzzerPin, HIGH);
    delay(bdt);
    digitalWrite(buzzerPin, LOW);
  }
  if(bright > 255)
  {
    bright = 255;
    digitalWrite(buzzerPin, HIGH);
    delay(bdt);
    digitalWrite(buzzerPin, LOW);
  }
  analogWrite(ledPin, bright);
  delay(dt);
}
