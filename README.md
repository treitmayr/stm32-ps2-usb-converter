# STM32: PS/2 to USB Converter

This code facilitates a STM32 chip to convert between PS/2 and USB. It is meant to connect a keyboard, which only provides a PS/2 connector, to a computer via USB.
This code powers on a daily basis:

- Cherry G80-3000LSMDE
- Fujitsu KB400

## Dependencies

- PlatformIO/VSCode
- `stlink`
- `openocd`

## Preparations

After cloning the repository, add it to your PlatformIO project. Then build and upload it
to your STM32.

## Hardware and Setup

You will obviously need a STM32 chip. At least, it should have connectors on the 5V-tolerant pins B8 and B9, as well on 5V and GND.
Take a freely connectable PS/2 socket and connect its 5V and GND with the STM. Also connect its DATA pin to B9 and its CLK pin to B8.
Add two pull-up resistors (10k Ohm works well) between B8/B9 and 5V, respectively.

Connect your STM via a microUSB/USB cable to your computer to power it up.
Use a ST-Link v2 Programmer (or similar) to flash the program onto the STM32.
You should then be able to connect your keyboard to the PS/2 socket and have it enumerated as an USB device on your computer.
