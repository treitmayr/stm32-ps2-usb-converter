#pragma once

#include <libopencm3/usb/usbd.h>

#ifdef __cplusplus
extern "C" {
#endif

extern usbd_device *usbd_dev;
void setup_usb(void);
void usb_enable_interrupts(void);
void update_leds(bool num, bool caps, bool scroll);
uint16_t usb_write_keyboard_packet(const void *buf, uint16_t len);
uint16_t usb_write_mediakey_packet(const void *buf, uint16_t len);

#ifdef __cplusplus
}
#endif
