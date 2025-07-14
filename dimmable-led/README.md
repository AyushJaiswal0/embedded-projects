# 🔆 Dimmable LED with Pushbuttons and Buzzer (Arduino Project)

This Arduino project allows you to control the brightness of an LED using two pushbuttons. A buzzer gives feedback when brightness reaches minimum or maximum level.

> This project demonstrates basic PWM control on an Arduino using buttons and auditory feedback. It's great for learning how to manage inputs, outputs, and constraints in embedded systems.

---

## 🧰 Components Required

| Component         | Quantity |
|-------------------|----------|
| Arduino UNO       | 1        |
| Red LED           | 1        |
| 330Ω Resistor     | 1        |
| 10KΩ Resistor     | 2        |
| Pushbutton        | 2        |
| Active Buzzer     | 1        |
| Breadboard + Wires| –        |

---

## 🎥 Preview

[Demo Image](images/circuit_preview.jpg)

---

## 🛠️ Circuit Diagram

### 🔌 Breadboard View
[Breadboard](circuit_diagram/breadboard_view.png)

### 📘 Schematic View
[📥 Download Schematic (PDF)](circuit_diagram/schematic_view.pdf)

---

## 🪛 Pin Connections

| Arduino Pin | Component        |
|-------------|------------------|
| 9           | LED (via 330Ω)   |
| 12          | Brightness + Btn |
| 2           | Brightness – Btn |
| 4           | Buzzer           |

---

## 💾 Code Snippet

```cpp
void loop() {
  BbuttonRead = digitalRead(BbuttonPin);
  DbuttonRead = digitalRead(DbuttonPin);

  if (BbuttonRead == 0) bright += brightFactor;
  if (DbuttonRead == 0) bright -= brightFactor;

  if (bright < 0 || bright > 255) {
    bright = constrain(bright, 0, 255);
    digitalWrite(buzzerPin, HIGH);
    delay(bdt);
    digitalWrite(buzzerPin, LOW);
  }

  analogWrite(ledPin, bright);
  delay(dt);
}

📁 [Full Code](code/dimmable_LED.ino)

## 🚀 How to Use

1. Clone or download this repository
2. Open `code/dimmable_led.ino` in the Arduino IDE
3. Connect the components as per the circuit diagram:
   - LED on pin 9 through 330Ω resistor
   - Pushbuttons on pins 12 (increase) and 2 (decrease)
   - Buzzer on pin 4
4. Upload the code to your Arduino UNO
5. Press the buttons to increase/decrease LED brightness
6. Buzzer will beep if brightness goes beyond limits

---

## 🧾 License

This project is licensed under the [MIT License](LICENSE)

---

## 👨‍💻 Author

**Ayush Jaiswal**  
📧 jaiswalayush2318@gmail.com  
🔗 [GitHub Profile](https://github.com/AyushJaiswal0)

---
