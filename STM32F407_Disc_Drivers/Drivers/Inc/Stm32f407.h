/*
 * Stm32f407.h
 *
 *  Created on: 21-Aug-2022
 *      Author: sudha
 */

#ifndef INC_STM32F407_H_
#define INC_STM32F407_H_

#define __vo       volatile

/*******MEMORY BASE ADDRESS**********************/

#define FLASH_BASE_ADDR         0x08000000UL
#define ROM_BASE_ADDR           0x1FFF0000UL
#define SRAM_BASE_ADDR          0x20000000UL

/*******AHB & APB  BASE ADDRESS******************/

#define AHB1_BASE_ADDR        0x40020000UL
#define AHB2_BASE_ADDR        0x50050000UL
#define AHB3_BASE_ADDR        0xA0000000UL
#define APB1_BASE_ADDR        0x40000000UL
#define APB2_BASE_ADDR        0x40010000UL


/**********GPIO base address ********************/


#define GPIOA_BASE_ADDR      0x40020000UL
#define GPIOB_BASE_ADDR      0x40020400UL
#define GPIOC_BASE_ADDR      0x40020800UL
#define GPIOD_BASE_ADDR      0x40020C00UL
#define GPIOE_BASE_ADDR      0x40021000UL
#define GPIOF_BASE_ADDR      0x40021400UL

#define RCC_BASE_ADDR        0x40023800UL

typedef struct
{
	__vo uint32_t MODER;
	__vo uint32_t OTYPER;
	__vo uint32_t OSPEEDR;
	__vo uint32_t PUPDR;
	__vo uint32_t IDR;
	__vo uint32_t ODR;
	__vo uint32_t BSRR;
	__vo uint32_t LCKR;
	__vo uint32_t AFRL;
	__vo uint32_t AFRH;

}GPIOX_REG_DEF;



typedef struct{

	__vo uint32_t RCC_CR;
	__vo uint32_t RCC_PLLCFGR;
	__vo uint32_t RCC_CFGR;
	__vo uint32_t RCC_CIR;
	__vo uint32_t RCC_AHB1RSTR;
	__vo uint32_t RCC_AHB2RSTR;
	__vo uint32_t RCC_AHB3RSTR;
	     uint32_t Reserved0;
	__vo uint32_t RCC_APB1RSTR;
	__vo uint32_t RCC_APB2RSTR;
	     uint32_t Reserved1;
	     uint32_t Reserved2;
	__vo uint32_t RCC_AHB1ENR;
	__vo uint32_t RCC_AHB2ENR;
	__vo uint32_t RCC_AHB3ENR;
	     uint32_t Reserved3;
	__vo uint32_t RCC_APB1ENR;
	__vo uint32_t RCC_APB2ENR;
	     uint32_t Reserved4;
	     uint32_t Reserved5;
	__vo uint32_t RCC_AHB1LPENR;
	__vo uint32_t RCC_AHB2LPENR;
	__vo uint32_t RCC_AHB3LPENR;
	     uint32_t Reserved6;
	__vo uint32_t RCC_APB1LPENR;
	__vo uint32_t RCC_APB2LPENR;
	     uint32_t Reserved7;
	     uint32_t Reserved8;
	__vo uint32_t RCC_BDCR;
	__vo uint32_t RCC_CSR;
	     uint32_t Reserved9;
	     uint32_t Reserved10;
	__vo uint32_t RCC_SSCGR;
	__vo uint32_t RCC_PLLI2SCFGR;
	__vo uint32_t RCC_PLLSAICFGR;
	__vo uint32_t RCC_DCKCFR;


}RCC_REG_DEF;



#define GPIOA   (GPIOX_REG_DEF*)GPIOA_BASE_ADDR
#define GPIOB   (GPIOX_REG_DEF*)GPIOB_BASE_ADDR
#define GPIOC   (GPIOX_REG_DEF*)GPIOC_BASE_ADDR
#define GPIOD   (GPIOX_REG_DEF*)GPIOD_BASE_ADDR
#define GPIOE   (GPIOX_REG_DEF*)GPIOE_BASE_ADDR
#define GPIOF   (GPIOX_REG_DEF*)GPIOF_BASE_ADDR


#define RCC      (RCC_REG_DEF*)RCC_BASE_ADDR

#define GPIOA_CLK_ENBL (RCC->RCC_AHB1ENR |= (1<<0))
#define GPIOB_CLK_ENBL (RCC->RCC_AHB1ENR |= (1<<1))
#define GPIOC_CLK_ENBL (RCC->RCC_AHB1ENR |= (1<<2))
#define GPIOD_CLK_ENBL (RCC->RCC_AHB1ENR |= (1<<3))
#define GPIOE_CLK_ENBL (RCC->RCC_AHB1ENR |= (1<<4))

#endif /* INC_STM32F407_H_ */
