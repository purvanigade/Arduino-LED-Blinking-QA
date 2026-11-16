
# QA Report
## AI-Assisted GitHub-Based QA Documentation and Problem Solving

### 1. Project Overview
**Project Title:** Arduino LED Blinking Program

**Platform:** Arduino Uno

**Programming Language:** Arduino C++

**Repository:** Arduino-LED-Blinking-QA

### 2. Brief Description of Code
The project implements a basic LED blinking program using an Arduino Uno. The LED connected to digital pin 13 switches ON and OFF at regular one-second intervals.

The initial program used the delay() function for timing. The improved version uses millis() for non-blocking timing and includes Serial Monitor messages for debugging.

### 3. QA Issues Identified

Four QA issues were documented using GitHub Issues.

#### Issue #1: Hardcoded LED Pin Configuration
- **Severity:** Medium
- **Problem:** The LED pin configuration was not declared as a constant.
- **Solution:** Used `const int ledPin = 13;`.
- **Status:** Code improvement merged; hardware verification pending.

#### Issue #2: LED Initial State Not Explicitly Set
- **Severity:** Low
- **Problem:** The initial LED output state was not explicitly set.
- **Solution:** Added `digitalWrite(ledPin, LOW);` in setup().
- **Status:** Code improvement merged; hardware verification pending.

#### Issue #3: Lack of Serial Debugging Information
- **Severity:** Low
- **Problem:** The program did not display LED status information.
- **Solution:** Added Serial communication and LED ON/OFF messages.
- **Status:** Code improvement merged; hardware verification pending.

#### Issue #4: LED Timing Configuration Requires Better Documentation
- **Severity:** Low
- **Problem:** Timing logic used delay() and was less flexible.
- **Solution:** Introduced a timing constant and non-blocking millis() logic.
- **Status:** Code improvement merged; hardware verification pending.

### 4. Code Improvements
The following improvements were made:
- Used a constant variable for LED pin configuration.
- Initialized the LED in the OFF state.
- Added Serial Monitor debugging messages.
- Replaced blocking delay() with non-blocking millis().
- Improved comments and code readability.

### 5. GitHub Collaboration and Version Control
The project used GitHub for code management and QA documentation.

- Created a separate branch named `qa-improvements`.
- Committed the improved Arduino code.
- Created Pull Request #5.
- Reviewed the changes and merged the Pull Request into the `main` branch.
- Added comments and updates to the QA issues.


### 6. Verification and Testing
The improved program was uploaded successfully to the Arduino Uno using COM6.

The following tests were performed:

1. LED initial state: Verified that the LED starts in the OFF state after reset.
2. LED blinking: Verified approximately one-second ON and OFF intervals.
3. Serial Monitor: Verified the startup message and LED ON/OFF messages at 9600 baud.
4. Non-blocking timing: Confirmed that the improved code uses millis() instead of delay().

**Result:** All four software and hardware behaviour checks were successfully verified.


### 7. Conclusion
This project demonstrated how AI assistance can support software quality assurance in an electronics project. GitHub Issues helped document potential problems, while branches and Pull Requests supported organized code improvements.

The activity improved understanding of code review, root cause analysis, debugging, version control, and QA documentation.
