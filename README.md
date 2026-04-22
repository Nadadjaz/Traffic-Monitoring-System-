# Traffic-Monitoring-System-
This is a traffic light controller I built using Arduino. It controls two intersections simultaneously using LEDs for the lights and a 7-segment display (via shift register) that counts down before each light change.

---

## What it does

Two traffic light sets work in opposite phases — when one side is green, the other is red. Each phase lasts about 8 seconds (the 7-segment counts down from 8 to 1), then both sides go orange briefly before switching.

The sequence goes like this:

```
Phase 1: Side 1 GREEN  / Side 2 RED    → countdown 8..1
Phase 2: Both ORANGE                   → countdown 8..1
Phase 3: Side 1 RED    / Side 2 GREEN  → countdown 8..1
Phase 4: Both ORANGE                   → countdown 8..1
... repeat
```

---

## Hardware I used

- Arduino UNO
- 6 LEDs (2 red, 2 orange, 2 green)
- 1 × 74HC595 shift register
- 1 × 7-segment display (common cathode)
- Resistors

**Pin connections:**

| Component | Pin |
|-----------|-----|
| Shift register DS | 7 |
| Shift register STCP | 6 |
| Shift register SHCP | 5 |
| Side 1 Green | 13 |
| Side 1 Orange | 12 |
| Side 1 Red | 11 |
| Side 2 Green | 2 |
| Side 2 Red | 3 |
| Side 2 Orange | 4 |

---

## 7-segment encoding

The digits are sent to the shift register using binary patterns:

| Digit | Binary |
|-------|--------|
| 1 | `0b0000110` |
| 2 | `0b1011011` |
| 3 | `0b1001111` |
| 4 | `0b1100110` |
| 5 | `0b1101101` |
| 6 | `0b1111101` |
| 7 | `0b0000111` |
| 8 | `0b1111111` |

---

## Known issue / bug

In the `segments()` function, digit **2** is shown twice (x3 appears two times in a row) and digit **2** (x2) is skipped entirely. This is a small bug I noticed — the countdown should go 8,7,6,5,4,3,2,1 but currently shows 8,7,6,5,4,3,3,1.

---

## Built with

![Arduino](https://img.shields.io/badge/Arduino-00979D?style=flat&logo=Arduino&logoColor=white)

**Concepts used:** Shift register (74HC595), `shiftOut()`, traffic light state machine, 7-segment display

---

## Author

**Nada Djazari** — Electronics of Embedded Systems Engineer  
📧 nada.djazari@gmail.com | 🎓 University of Jijel, Algeria
