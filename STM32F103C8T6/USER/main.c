#include "stm32f10x.h"
#include "delay.h"
#include "bsp_usart.h"




 int main(void)
 {	
	 delay_init();
	Usart1_Init(115200);
	 printf("hello\r\n");
  while(1)
	{
	}
 }
