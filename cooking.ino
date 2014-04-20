#define CLEAR 6
#define ADDTIME 5

char input;

void setup() {
  pinMode(CLEAR, OUTPUT);
  pinMode(ADDTIME, OUTPUT);
  digitalWrite(CLEAR, HIGH);
  digitalWrite(ADDTIME, HIGH);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    input = Serial.read();
    switch(input) {
      case '1':
        Serial.println("addtime");
        digitalWrite(ADDTIME, LOW);
        delay(100);
        digitalWrite(ADDTIME, HIGH);
        break;
      case '2':
        Serial.println("stop");
        digitalWrite(CLEAR, LOW);
        delay(100);
        digitalWrite(CLEAR, HIGH);
        break;
      case '3':
        Serial.println("clear");
        digitalWrite(CLEAR, LOW);
        delay(100);
        digitalWrite(CLEAR, HIGH);
        delay(100);
        digitalWrite(CLEAR, LOW);
        delay(100);
        digitalWrite(CLEAR, HIGH);
        break;      
      default:
        break;
    }
  }
}
