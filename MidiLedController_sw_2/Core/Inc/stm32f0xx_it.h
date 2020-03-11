/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32f0xx_it.h
  * @brief   This file contains the headers of the interrupt handlers.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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
#ifndef __STM32F0xx_IT_H
#define __STM32F0xx_IT_H

#ifdef __cplusplus
 extern "C" {
#endif 

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
 extern int enabledNoteOnCmd;

 // MIDI

 // first 128 values are note data commands
 #define MIDI_MAX_NOTE 0x7F

 // common midi data
 #define MIDI_TIMCLK 248
 #define MIDI_NOTEON 144
 #define MIDI_NOTEC2 36
 #define MIDI_NOTECSHARP2 37
 #define MIDI_NOTED2 38
 #define MIDI_NOTEDSHARP2 39
 #define MIDI_NOTEE2 40
 #define MIDI_NOTEF2 41
 #define NIDI_NOTEFSHARP2 42
 #define MIDI_NOTEG2 43
 #define MIDI_NOTEGSHARP2 44

 // Note On commands
 #define CH1_NOTE_ON 0x90
 #define CH2_NOTE_ON 0x91
 #define CH3_NOTE_ON 0x92
 #define CH4_NOTE_ON 0x93
 #define CH5_NOTE_ON 0x94
 #define CH6_NOTE_ON 0x95
 #define CH7_NOTE_ON 0x96
 #define CH8_NOTE_ON 0x97
 #define CH9_NOTE_ON 0x98
 #define CH10_NOTE_ON 0x99
 #define CH11_NOTE_ON 0x9A
 #define CH12_NOTE_ON 0x9B
 #define CH13_NOTE_ON 0x9C
 #define CH14_NOTE_ON 0x9D
 #define CH15_NOTE_ON 0x9E
 #define CH16_NOTE_ON 0x9F
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void NMI_Handler(void);
void HardFault_Handler(void);
void SVC_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);
void DMA1_Channel1_IRQHandler(void);
void TIM16_IRQHandler(void);
void USART1_IRQHandler(void);
/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

#ifdef __cplusplus
}
#endif

#endif /* __STM32F0xx_IT_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
