/*
 * shell.h
 *
 *  Created on: Nov 9, 2023
 *      Author: serva
 */

#ifndef INC_LIB_SHELL_SHELL_H_
#define INC_LIB_SHELL_SHELL_H_

#include <stdint.h>

#define UART_DEVICE huart1

#define ARGC_MAX 8
#define BUFFER_SIZE 40
#define SHELL_FUNC_LIST_MAX_SIZE 64

int shell_init();
int shell_add(char c, int (* pfunc)(int argc, char ** argv), char * description);
int shell_run();
void shell_uart_receive_irq_cb(void);


#endif /* INC_LIB_SHELL_SHELL_H_ */
