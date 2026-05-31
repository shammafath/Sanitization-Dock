#define IR_SENSOR 2
#define RELAY1 3
#define RELAY2 4

void setup() {

  pinMode(IR_SENSOR, INPUT);
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);

  digitalWrite(RELAY1, HIGH);   // OFF
  digitalWrite(RELAY2, HIGH);   // OFF

  Serial.begin(115200);
}

void loop() {

  int irState = digitalRead(IR_SENSOR);

  if (irState == LOW) {

    Serial.println("Object Detected");

    digitalWrite(RELAY1, LOW);   // ON
    digitalWrite(RELAY2, LOW);   // ON

    delay(20000);   // 20 seconds

    digitalWrite(RELAY1, HIGH);  // OFF
    digitalWrite(RELAY2, HIGH);  // OFF

    Serial.println("Relays OFF");

    delay(1000);
  }
}