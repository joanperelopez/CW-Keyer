# uSDX_EA3AGK

This project was started in April 2022 based in the uSDX SDR transceiver project https://github.com/threeme3/usdx The project is only started, nothing is cheked yet. I am going to modify all the parts of the project: filters PCB, base PCB and display PCB, mechanical issues...
 The pourpose of the project is only experimental and NON comercial.
 
 The information contained herein may be used for private purposes, experimentation or modification to create improved products, but not for commercial purposes.

Once I have finished parts, I will publish each of them!

LIST OF MODIFICATIONS

1. Eight bandpass filters covering from 3,5 Mhz to 30 Mhz.
2. Control of the Filters by I2C.
3. RF wide band amplifier in the RX signal. (Increase sensitivity).
4. 2W Audio amplifier for the speaker.
5. Mic amplifier with gain control.
6. Jack with I/Q signals. (To connect in a computer and have the spectrum and waterfall).
7. 4W TX power amplifier.
8. Internal fan.
9. Direct volume regulation.
10. RX-TX by relay. 
11. 5V switching regulator (Less heating).
12. Few wires.

TOOLS & APPLICATIONS

1. NanoVNA.
2. TinySA.
3. KiCAD   (Circuit & PCB design).
4. FreeCAD (Mechanical design).
5. Hantek DSO4102C Oscilloscope.
6. Saleae logic analyzer.
7. FY6800 function waveform generator.
8. LCR meter.
9. PROMAX frequency counter.
10. Some online filter calculators.


PROGRESS:

June, 3 → 
PCBs 1.2 already designed. Pending some corrections when revising schematics. Working in the case, revising circuits, checking modifications.

June, 8 → 
PCB,s requested to China. While I am waitting I will finish the plastic case design.

June, 24 → 
Building the circuits.

July, 4 → Initial test and working on the software.


![Captura de pantalla 2022-06-03 a las 14 23 47](https://user-images.githubusercontent.com/73885181/171853175-65d5c0ed-09fd-4038-a4fe-0a16bd049513.png)
![Captura de pantalla 2022-06-03 a las 14 24 33](https://user-images.githubusercontent.com/73885181/171853196-1eb8b762-5802-446b-998d-6ad5af846b66.png)
Two pictures of the mechanical design

![SDR_1 2_Base](https://user-images.githubusercontent.com/73885181/171909729-fd36bd90-6c0c-46e6-8462-5cfbe09e47f3.png)
This is the base PCB
![SDR_1 2_Base2](https://user-images.githubusercontent.com/73885181/171912813-f89b97f0-db07-42c5-95be-8e284b0d10b9.png)
Bottom view of the base PCB.

![SDR_1 2_Filtros](https://user-images.githubusercontent.com/73885181/171854786-272909ea-9ea3-49f3-b5d6-5f98be0a03ec.png)
The filters are passband and the frequency range from 1,8 to 30 Mhz are divided in eight blocks. The impedance are 300 Ohm in order to have optimum values of L and C. Then, two transmission line transformes convert the 200 Ohm to 50 Ohm in the input and output of the filters. The switching is by relays and an expansor PCF8574A and ULN2003. Each block can be switched manually in order to adjust or verify the behaviour of the filter.

![SDR_1 2_Filtros2](https://user-images.githubusercontent.com/73885181/171854796-45dcbcc1-febf-46de-bed7-7836cadc89d8.png)
Bottom view of the filters PCB.

![SDR_1 2_Display](https://user-images.githubusercontent.com/73885181/171854838-5df36f80-1014-457b-b0aa-caa2cdf2c4b6.png)
The display connects all the signals with the base circuit by means of a 22 pins header.

![SDR_1 2_Display](https://user-images.githubusercontent.com/73885181/171913244-8e2aac08-c480-4ae5-a059-617ec567827f.png)
Bottom view of the display PCB

![WhatsApp Image 2022-06-30 at 10 53 11 AM](https://user-images.githubusercontent.com/73885181/176636152-6f0929f5-176b-4a3e-8b87-f18fd8b147d3.jpeg)
The PCBs have arrived!
![WhatsApp Image 2022-07-04 at 11 45 29 AM-2](https://user-images.githubusercontent.com/73885181/177129703-d0db5f9d-d66f-4e0c-9356-503bf3e5f9f3.jpeg)

![WhatsApp Image 2022-07-04 at 11 45 29 AM](https://user-images.githubusercontent.com/73885181/177129725-974addba-c474-48ab-a6bf-e3365d190849.jpeg)
![WhatsApp Image 2022-07-04 at 11 45 27 AM](https://user-images.githubusercontent.com/73885181/177129744-e0977986-19a7-40ad-9726-37263e595ec4.jpeg)
The base and display PCBs assembled. Start the hard work!
