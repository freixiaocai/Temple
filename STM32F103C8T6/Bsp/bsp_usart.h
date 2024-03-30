#ifndef  BSP_USART_H
#define  BSP_USART_H

#include <stdint.h>
#include <stdio.h>
#include "stm32f10x.h"

int fputc(int ch ,FILE *f);
void Usart1_Init(uint32_t baud);

#endif

