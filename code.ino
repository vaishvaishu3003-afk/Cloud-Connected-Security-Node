#define TRIG_PIN 5
#define ECHO_PIN 18

#define BUZZER_PIN 23
#define LED_PIN 22

void setup() {
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);
  float distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 50) {

    Serial.println("🚨 ALERT! Intruder Detected!");

    digitalWrite(LED_PIN, HIGH);

    tone(BUZZER_PIN, 1000);

  } else {

    Serial.println("✅ Area Secure");

    digitalWrite(LED_PIN, LOW);

    noTone(BUZZER_PIN);
  }

  Serial.println("----------------------");

  delay(500);
}