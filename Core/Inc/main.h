/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B_1_Pin GPIO_PIN_0
#define B_1_GPIO_Port GPIOA
#define B_2_Pin GPIO_PIN_1
#define B_2_GPIO_Port GPIOA
#define B_3_Pin GPIO_PIN_2
#define B_3_GPIO_Port GPIOA
#define B_4_Pin GPIO_PIN_3
#define B_4_GPIO_Port GPIOA
#define E_1_Pin GPIO_PIN_6
#define E_1_GPIO_Port GPIOA
#define E_2_Pin GPIO_PIN_7
#define E_2_GPIO_Port GPIOA
#define E_3_Pin GPIO_PIN_0
#define E_3_GPIO_Port GPIOB
#define E_4_Pin GPIO_PIN_1
#define E_4_GPIO_Port GPIOB
#define A_1_Pin GPIO_PIN_13
#define A_1_GPIO_Port GPIOB
#define A_3_Pin GPIO_PIN_14
#define A_3_GPIO_Port GPIOB
#define A_4_Pin GPIO_PIN_15
#define A_4_GPIO_Port GPIOB
#define C_1_Pin GPIO_PIN_6
#define C_1_GPIO_Port GPIOC
#define C_2_Pin GPIO_PIN_7
#define C_2_GPIO_Port GPIOC
#define C_3_Pin GPIO_PIN_8
#define C_3_GPIO_Port GPIOC
#define C_4_Pin GPIO_PIN_9
#define C_4_GPIO_Port GPIOC
#define A_2_Pin GPIO_PIN_8
#define A_2_GPIO_Port GPIOA
#define A_5_Pin GPIO_PIN_9
#define A_5_GPIO_Port GPIOA
#define A_6_Pin GPIO_PIN_10
#define A_6_GPIO_Port GPIOA
#define CAN_RX_Pin GPIO_PIN_11
#define CAN_RX_GPIO_Port GPIOA
#define CAN_TX_Pin GPIO_PIN_12
#define CAN_TX_GPIO_Port GPIOA
#define USART4_TX_Pin GPIO_PIN_10
#define USART4_TX_GPIO_Port GPIOC
#define USART4_RX_Pin GPIO_PIN_11
#define USART4_RX_GPIO_Port GPIOC
#define D_1_Pin GPIO_PIN_6
#define D_1_GPIO_Port GPIOB
#define D_2_Pin GPIO_PIN_7
#define D_2_GPIO_Port GPIOB
#define D_3_Pin GPIO_PIN_8
#define D_3_GPIO_Port GPIOB
#define D_4_Pin GPIO_PIN_9
#define D_4_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
