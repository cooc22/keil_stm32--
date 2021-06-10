/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   呼吸灯例程
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火 iSO STM32 开发板 
  * 论坛    :http://www.chuxue123.com
  * 淘宝    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "stm32f10x.h"
#include "bsp_breathing.h"

/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main(void)
{			
	/* 初始化呼吸灯 */
	TIM3_Breathing_Init();

	while(1);	  
}

/*********************************************END OF FILE**********************/

