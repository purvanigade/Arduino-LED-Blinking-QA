
// Arduino LED Blinking - AI-Assisted QA Project

const int ledPin = 13;

// Timing configuration
unsigned long previousMillis = 0;
const unsigned long interval = 1000;

// LED state
bool ledState = LOW;

void setup() {

    // Configure LED pin as output
    pinMode(ledPin, OUTPUT);

    // Initialize LED in OFF state
    digitalWrite(ledPin, LOW);

    // Initialize serial communication
    Serial.begin(9600);
    Serial.println("LED Blinking Program Started");
}

void loop() {

    // Get current time
    unsigned long currentMillis = millis();

    // Check whether the interval has elapsed
    if (currentMillis - previousMillis >= interval) {

        previousMillis = currentMillis;

        // Change LED state
        ledState = !ledState;

        // Update LED output
        digitalWrite(ledPin, ledState);

        // Display LED status
        if (ledState == HIGH) {
            Serial.println("LED ON");
        }
        else {
            Serial.println("LED OFF");
        }
    }
}
