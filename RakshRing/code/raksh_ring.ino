// raksh_ring.ino — Raksh Ring prototype code

const int buttonPin = 4;
int buttonState = 0;
int lastButtonState = 0;
unsigned long lastPressTime = 0;
int pressCount = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW && lastButtonState == HIGH) {
    unsigned long currentTime = millis();
    if (currentTime - lastPressTime < 5000) {
      pressCount++;
    } else {
      pressCount = 1;
    }
    lastPressTime = currentTime;

    if (pressCount >= 3) {
      triggerAlert();
      pressCount = 0;
    }
  }

  lastButtonState = buttonState;
}

void triggerAlert() {
  Serial.println("🚨 SOS Triggered! Sending alert...");
  // Add Bluetooth/GSM transmission code here later
}
