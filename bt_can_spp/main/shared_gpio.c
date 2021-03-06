#include "shared_gpio.h"
#include "driver/gpio.h"

void init_gpio() {
	gpio_set_direction(GPIO_LED, GPIO_MODE_INPUT_OUTPUT);
}

void tgl_led() {
	gpio_set_level(GPIO_LED, 1 - gpio_get_level(GPIO_LED));
}

void led_on() {
	gpio_set_level(GPIO_LED, 1);
}

void led_off() {
	gpio_set_level(GPIO_LED, 0);
}

// void p_on(uint8_t id) {
// 	gpio_set_level(id, 1);
// }

// void p_off(uint8_t id) {
// 	gpio_set_level(id, 0);
// }

// void p_tg(uint8_t id) {
// 	uint8_t state = gpio_get_level(id);
// 	gpio_set_level(id, 1 - state);
// }