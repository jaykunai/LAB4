/*
 * button.h
 *
 *  Created on: Nov 30, 2022
 *      Author: Acer
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "main.h"
void button_reading(void);

unsigned char is_button_pressed(unsigned char index);
int is_button_pressed_1s(uint8_t index);


#endif /* INC_BUTTON_H_ */
