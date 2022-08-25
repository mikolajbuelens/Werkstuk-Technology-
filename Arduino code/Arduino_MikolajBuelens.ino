int red_led = 11;
int yellow_led = 10;
int green_led = 9;
#define BUTTON_PIN 4

void setup() {

  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void random_led() {
  int random_led = random(9, 12);
  digitalWrite(random_led, HIGH);
  delay(3000);
 
  digitalWrite(random_led, LOW);
  delay(3000);
  
}

void loop() {
  byte buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == LOW) {
random_led();
  }
  delay(3000);
}
