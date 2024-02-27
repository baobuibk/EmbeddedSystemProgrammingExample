/*
 * heater_control.h
 *
 *  Created on: Feb 27, 2024
 *      Author: Admin
 */

#ifndef HEATER_H_
#define HEATER_H_
#include <stdbool.h>
#include <stdint.h>
typedef enum{HEATER_OFF, HEATER_WAIT_ON, HEATER_ON, HEATER_WAIT_OFF}	heater_state_t;
extern	uint32_t	heater_timer_count;

void heater_init_state();
void	heater_state_update();
#endif /* HEATER_H_ */
