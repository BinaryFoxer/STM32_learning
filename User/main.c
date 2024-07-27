#include "stm32f10x.h"                  // Device header

int main(void){
//	RCC->APB2ENR = 0x00000010;
//	//RCC是Reset and Clock Control寄存器，根据手册打开CPU时钟
//	GPIOC->CRH = 0x00300000;
//	//配置io13端口，推挽输出/输出模式（50MHz）
//	GPIOC->ODR = 0x00000000;
//	//配置端口输出寄存器，13口输出1
/*
	下面使用库函数进行开发
*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	//首先进行时钟使能
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	//根据参数使用
//	GPIO_SetBits(GPIOC, GPIO_Pin_13);
	GPIO_ResetBits(GPIOC, GPIO_Pin_13);
	while(1)
	{
		
	}

}
