
# AI Prompt Log
## Project: Arduino LED Blinking – QA Documentation

### 1. Initial Code Review
**Prompt:** Analyze the Arduino LED blinking code and identify possible quality issues, coding problems, and areas for improvement.

**AI Assistance:** ChatGPT reviewed the code and suggested improvements related to LED pin configuration, initialization, debugging, and timing.

### 2. LED Pin Configuration
**Prompt:** Review the LED pin declaration and suggest a better way to define the pin.

**AI Assistance:** Suggested using a constant variable (`const int ledPin = 13`) to prevent accidental changes.

### 3. LED Initial State
**Prompt:** Check whether the LED output is initialized properly during startup.

**AI Assistance:** Suggested adding `digitalWrite(ledPin, LOW)` after configuring the pin as OUTPUT.

### 4. Serial Debugging
**Prompt:** Suggest a simple way to display LED status for debugging.

**AI Assistance:** Suggested using Serial communication at 9600 baud and displaying LED ON/OFF messages.

### 5. Non-Blocking Timing
**Prompt:** Improve the LED blinking program by replacing blocking delay() with non-blocking timing.

**AI Assistance:** Suggested using `millis()` with a previousMillis variable and a timing interval.

### 6. Code Improvement
**Prompt:** Provide the complete improved Arduino LED blinking code with initialization, serial debugging, and non-blocking timing.

**AI Assistance:** ChatGPT generated the revised Arduino code, which was committed to a separate branch and merged into the main branch through a Pull Request.

### 7. QA Documentation
**Prompt:** Help prepare QA issue descriptions, root cause analysis, proposed solutions, and verification steps.

**AI Assistance:** Helped structure four GitHub QA issues and prepare updates describing implemented improvements and pending hardware verification.

## Conclusion
AI assistance was used to support code review, identify potential improvements, understand root causes, suggest solutions, and prepare QA documentation. The suggested code changes were reviewed and merged into the main branch. Hardware verification remains pending.
