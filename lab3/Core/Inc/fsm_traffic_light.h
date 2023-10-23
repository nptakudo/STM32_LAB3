/*
 * fsm_automatic.h
 *
 *  Created on: Oct 21, 2023
 *      Author: takudo
 */

#ifndef INC_FSM_TRAFFIC_LIGHT_H_
#define INC_FSM_TRAFFIC_LIGHT_H_

#include "global.h"

void led_off();

void setRED1();
void setGREEN1();
void setYELLOW1();

void setRED2();
void setGREEN2();
void setYELLOW2();

void fsm_traffic_light();

#endif /* INC_FSM_TRAFFIC_LIGHT_H_ */
