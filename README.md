# Arduino-WDT-Sleep-library

Sleep Modes
* SLEEP_MODE_IDLE
* SLEEP_MODE_ADC
* SLEEP_MODE_PWR_SAVE
* SLEEP_MODE_STANDBY
* SLEEP_MODE_PWR_DOWN

Watchdog Timer Control Register  

| WDP3 | WDP2 | WDP1 | WDP0 |  Time-out |
| --- | --- | --- | --- | --- |
|0 | 0 | 0 | 0 | 16ms |
| 0 | 0 | 0 | 1 | 32ms |
| 0 | 0 | 1 | 0 | 64ms |
| 0 | 0 | 1 | 1 | 0.125 s |
| 0 | 1 | 0 | 0 | 0.25 s |
| 0 | 1 | 0 | 1 | 0.5 s |
| 0 | 1 | 1 | 0 | 1.0 s |
| 0 | 1 | 1 | 1 | 2.0 s |
| 1 | 0 | 0 | 0 | 4.0 s |
| 1 | 0 | 0 | 1 | 8.0 s |

Reference:  

* Trips in Tech - Arduino Sleep by Alex  

http://tripsintech.com/arduino-sleep/

* ATmega328/P - Complete Datasheet   

http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-42735-8-bit-AVR-Microcontroller-ATmega328-328P_Datasheet.pdf
