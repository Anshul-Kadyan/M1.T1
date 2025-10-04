# SIT315 – Task M1QP: Comprehensive Interrupt-Based Sense-Think-Act System

## 📌 Overview

This repository contains my submission for **Task M1QP** in the SIT315 Programming Paradigms unit.  
The task progressively builds an **interrupt-based Sense-Think-Act system** on Arduino, integrating multiple sensors and actuators with **real-time concurrent event handling**.

I have implemented up to **QP Level 4 (Distinction)**, which includes:

- Multi-sensor input (digital sensors)
- **Pin Change Interrupts (PCI)** for grouped pin handling
- **Timer Interrupts** for periodic tasks (e.g., blinking LED, logging data)
- Modular and interrupt-safe code design

---

## 🛠 System Architecture

- **Board**: Arduino Uno (ATmega328P)
- **Sensors**: Digital push buttons (D2, D3), extra digital sensor via PCI group (D8–D13)
- **Actuators**: LEDs and Serial Monitor output
- **Interrupts**:
  - External interrupts (`attachInterrupt`)
  - Pin Change Interrupts (PCI)
  - Timer1 interrupt for periodic events

---

## 📂 Repository Structure

- `TaskM1.cpp` → Final Arduino sketch (C++ file, exported from `.ino`)
- `circuit_diagram.png` → Schematic/TinkerCad circuit diagram
- `serial_output.png` → Screenshot of Serial Monitor demonstration
- `Reflection_Report.pdf` → 300–500 word reflection on design, interrupt usage, and issues
- `README.md` → This document

---

## ▶️ Running the Project

### Requirements

- Arduino IDE installed
- Arduino Uno board (or TinkerCad simulation link)
- Libraries: `EnableInterrupt` (if PCI handling library is used)

### Steps

1. Clone this repo
   ```bash
   git clone https://github.com/Anshul-Kadyan/M1.T1.git
   cd M1.T1
   Open TaskM1.cpp (or .ino) in Arduino IDE
   ```

Upload to Arduino Uno

Open Serial Monitor at 9600 baud

Trigger sensor inputs → observe interrupts firing and actuator responses

📊 Demonstration Evidence
✅ Working Sense-Think-Act logic with multiple sensors

✅ Serial Monitor logs of interrupt triggers and timer events

✅ TinkerCad circuit diagram included

✅ Reflection report uploaded

📝 Reflection (Summary)
The system demonstrates concurrent interrupt-driven design by separating event-based (PCI, external interrupts) and time-based (Timer) logic. Challenges faced included:

Configuring PCI correctly for grouped pins

Avoiding blocking calls in ISRs

Ensuring modularity to keep interrupt routines lightweight

Through iterative testing, I achieved reliable multi-sensor + timer integration that met QP4 requirements.

🔗 Links
GitHub Repo: M1.T1

TinkerCad Simulation: [Insert your circuit link here]

✅ Deliverables
TaskM1.cpp (final code)

Serial Monitor screenshot

Circuit diagram (or TinkerCad link)

Reflection report (PDF/Markdown)

README (this file)
