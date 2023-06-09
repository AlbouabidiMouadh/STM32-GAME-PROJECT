/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
 ******************************************************************************
 ** This notice applies to any and all portions of this file
 * that are not between comment pairs USER CODE BEGIN and
 * USER CODE END. Other portions of this file, whether
 * inserted by the user or by software development tools
 * are owned by their respective copyright owners.
 *
 * COPYRIGHT(c) 2019 STMicroelectronics
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f4xx_hal.h"

/* USER CODE BEGIN Includes */
#include "NOKIA5110.h"
#include "FONT_IMAGE.h"

/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/
SPI_HandleTypeDef hspi2;
DMA_HandleTypeDef hdma_spi2_tx;

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
#define DELAY   2000
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_SPI2_Init(void);

/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/

/* USER CODE END PFP */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
 * @brief  The application entry point.
 *
 * @retval None
 */
int main(void) {
	/* USER CODE BEGIN 1 */

	/* USER CODE END 1 */

	/* MCU Configuration----------------------------------------------------------*/

	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	HAL_Init();

	/* USER CODE BEGIN Init */

	/* USER CODE END Init */

	/* Configure the system clock */
	SystemClock_Config();

	/* USER CODE BEGIN SysInit */

	/* USER CODE END SysInit */

	/* Initialize all configured peripherals */
	MX_GPIO_Init();
	MX_DMA_Init();
	MX_SPI2_Init();
	/* USER CODE BEGIN 2 */
	N5110_Init();

	/* USER CODE END 2 */

	/* Infinite loop */
	/* USER CODE BEGIN WHILE */
	while (1) {

		/* USER CODE END WHILE */

		/* USER CODE BEGIN 3 */
		/* Small Font Testing */
//    N5110_Clear();
//    N5110_SetFont(SmallFont);
//    N5110_PrintStr(N5110_MAX_WIDTH/2-(4.5*6), N5110_MAX_HEIGHT/2 - 4, "NOKIA5110", true);
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//    N5110_Clear();
//    N5110_SetFont(TinyFont);
//    N5110_PrintStr(N5110_MAX_WIDTH/2-(4.5*4), N5110_MAX_HEIGHT/2 - 3, "NOKIA5110", true);
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//    N5110_Clear();
//    N5110_SetFont(MediumNumbers);
//    N5110_PrintStr(N5110_MAX_WIDTH/2-(2.5*12), N5110_MAX_HEIGHT/2 - 8, "99-99", true);
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//    N5110_Clear();
//    N5110_SetFont(BigNumbers);
//    N5110_PrintStr(N5110_MAX_WIDTH/2-(2.5*14), N5110_MAX_HEIGHT/2 - 12, "99-99", true);
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//    N5110_Clear();
//    N5110_SetFont(SmallFont);
//    N5110_PrintStr(N5110_MAX_WIDTH/2-(4.5*6), N5110_MAX_HEIGHT/2 - 4, "NOKIA5110", true);
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//    N5110_InvertDisplay(true);
//    HAL_Delay(DELAY);
//    N5110_InvertDisplay(false);
//    HAL_Delay(DELAY);
//
//    N5110_DrawHLine(0, N5110_MAX_HEIGHT/2 - 8, N5110_MAX_WIDTH, true);
//    N5110_DrawHLine(0, N5110_MAX_HEIGHT/2 + 8, N5110_MAX_WIDTH, true);
//    N5110_DrawVLine(0, N5110_MAX_HEIGHT/2 - 8, 16, true);
//    N5110_DrawVLine(N5110_MAX_WIDTH-1, N5110_MAX_HEIGHT/2 - 8, 16, true);
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//    N5110_DrawRect(0, N5110_MAX_HEIGHT/2 - 8, N5110_MAX_WIDTH-1, N5110_MAX_HEIGHT/2 + 8, false, false);
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//    N5110_Clear();
//    N5110_Update();
//
//    for(int i = 0; i < N5110_MAX_WIDTH; i=i+5)
//    {
//      N5110_DrawLine(0, 0, i, N5110_MAX_HEIGHT-1, true);
//    }
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//    N5110_Clear();
//    for(int i = 0; i < N5110_MAX_WIDTH; i=i+5)
//    {
//      N5110_DrawLine(0, N5110_MAX_HEIGHT-1, i, 0, true);
//    }
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//    N5110_Clear();
//    for(int i = 0; i < N5110_MAX_WIDTH; i=i+5)
//    {
//      N5110_DrawLine(N5110_MAX_WIDTH-1, 0, i, N5110_MAX_HEIGHT-1, true);
//    }
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//    N5110_Clear();
//    for(int i = 0; i < N5110_MAX_WIDTH; i=i+5)
//    {
//      N5110_DrawLine(N5110_MAX_WIDTH-1, N5110_MAX_HEIGHT-1, i, 0, true);
//    }
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//
//    N5110_Clear();
//    for(int i = 0; i < N5110_MAX_HEIGHT/2; i=i+2)
//    {
//      N5110_DrawRect(N5110_MAX_WIDTH/2-1.7*i,N5110_MAX_HEIGHT/2-1-i,N5110_MAX_WIDTH/2+1.7*i,N5110_MAX_HEIGHT/2+i, true, false);
//      N5110_Update();
//    }
//    HAL_Delay(DELAY);
//
//    N5110_DrawRect(0, 0, N5110_MAX_WIDTH-1, N5110_MAX_HEIGHT-1, true, true);
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//
//    N5110_Clear();
//    for(int i = 0; i < N5110_MAX_HEIGHT/2; i=i+2)
//    {
//      N5110_DrawCircle(N5110_MAX_WIDTH/2-1,N5110_MAX_HEIGHT/2-1, i, true, false);
//      N5110_Update();
//    }
//    HAL_Delay(DELAY);
//
//
//    N5110_DrawCircle(N5110_MAX_WIDTH/2-1,N5110_MAX_HEIGHT/2-1, N5110_MAX_HEIGHT/2-1, true, true);
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//    N5110_PrintStr(15, N5110_MAX_HEIGHT/2 - 4, "NOKIA5110", false);
//    N5110_Update();
//    HAL_Delay(DELAY);
//
//    N5110_Clear();
//    N5110_DrawBitmap(0, 0, (uint8_t*)Bitmap, N5110_MAX_WIDTH, N5110_MAX_HEIGHT);
//    N5110_Update();
//    HAL_Delay(DELAY);



		N5110_Clear();
		N5110_SetFont(TinyFont);
		N5110_PrintStr(20, 2, "WELCOME TO", true);
		N5110_SetFont(SmallFont);
		N5110_PrintStr(11, 15, "ROCK DODGE", true);

//		N5110_Update();

		N5110_SetFont(TinyFont);
		N5110_PrintStr(1, 30, "SETTINGS", true);
		N5110_PrintStr(36, 30, "START", true);
		N5110_PrintStr(57, 30, "SCORES", true);
		N5110_Update();
		N5110_Clear();
		HAL_Delay(5000);


		N5110_Update();
		N5110_Clear();
		N5110_SetFont(SmallFont);
		N5110_PrintStr(20, 2, "SETTINGS", true);
		N5110_Update();
		N5110_SetFont(TinyFont);
		N5110_PrintStr(15, 18, "LEVEL <EASY>", true);
		N5110_PrintStr(10, 30, "BRIGHTNESS <75%>", true);
		N5110_Update();
		N5110_Clear();
		HAL_Delay(DELAY * 3);


		N5110_Update();
		N5110_Clear();
		N5110_SetFont(SmallFont);
		N5110_PrintStr(20, 2, "SCORES", true);
		N5110_Update();
		N5110_SetFont(TinyFont);
		N5110_PrintStr(20, 15, "1. <9999>", true);
		N5110_PrintStr(20, 25, "2. <EMPTY>", true);
		N5110_PrintStr(20, 35, "3. <EMPTY>", true);
		N5110_Update();
		N5110_Clear();
		HAL_Delay(DELAY * 3);
	}
	/* USER CODE END 3 */

}

/**
 * @brief System Clock Configuration
 * @retval None
 */
void SystemClock_Config(void) {

	RCC_OscInitTypeDef RCC_OscInitStruct;
	RCC_ClkInitTypeDef RCC_ClkInitStruct;

	/**Configure the main internal regulator output voltage
	 */
	__HAL_RCC_PWR_CLK_ENABLE();

	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

	/**Initializes the CPU, AHB and APB busses clocks
	 */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
	RCC_OscInitStruct.HSEState = RCC_HSE_ON;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
	RCC_OscInitStruct.PLL.PLLM = 8;
	RCC_OscInitStruct.PLL.PLLN = 336;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 7;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		_Error_Handler(__FILE__, __LINE__);
	}

	/**Initializes the CPU, AHB and APB busses clocks
	 */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK) {
		_Error_Handler(__FILE__, __LINE__);
	}

	/**Configure the Systick interrupt time
	 */
	HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq() / 1000);

	/**Configure the Systick
	 */
	HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

	/* SysTick_IRQn interrupt configuration */
	HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

/* SPI2 init function */
static void MX_SPI2_Init(void) {

	/* SPI2 parameter configuration*/
	hspi2.Instance = SPI2;
	hspi2.Init.Mode = SPI_MODE_MASTER;
	hspi2.Init.Direction = SPI_DIRECTION_2LINES;
	hspi2.Init.DataSize = SPI_DATASIZE_8BIT;
	hspi2.Init.CLKPolarity = SPI_POLARITY_LOW;
	hspi2.Init.CLKPhase = SPI_PHASE_1EDGE;
	hspi2.Init.NSS = SPI_NSS_SOFT;
	hspi2.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_4;
	hspi2.Init.FirstBit = SPI_FIRSTBIT_MSB;
	hspi2.Init.TIMode = SPI_TIMODE_DISABLE;
	hspi2.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
	hspi2.Init.CRCPolynomial = 10;
	if (HAL_SPI_Init(&hspi2) != HAL_OK) {
		_Error_Handler(__FILE__, __LINE__);
	}

}

/** 
 * Enable DMA controller clock
 */
static void MX_DMA_Init(void) {
	/* DMA controller clock enable */
	__HAL_RCC_DMA1_CLK_ENABLE();

	/* DMA interrupt init */
	/* DMA1_Stream4_IRQn interrupt configuration */
	HAL_NVIC_SetPriority(DMA1_Stream4_IRQn, 0, 0);
	HAL_NVIC_EnableIRQ(DMA1_Stream4_IRQn);

}

/** Configure pins as 
 * Analog
 * Input
 * Output
 * EVENT_OUT
 * EXTI
 */
static void MX_GPIO_Init(void) {

	GPIO_InitTypeDef GPIO_InitStruct;

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOH_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_GPIOD_CLK_ENABLE();

	/*Configure GPIO pin Output Level */
	HAL_GPIO_WritePin(GPIOD, RST_Pin | CE_Pin | DC_Pin | GPIO_PIN_15,
			GPIO_PIN_RESET);

	/*Configure GPIO pins : RST_Pin CE_Pin DC_Pin PD15 */
	GPIO_InitStruct.Pin = RST_Pin | CE_Pin | DC_Pin | GPIO_PIN_15;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
 * @brief  This function is executed in case of error occurrence.
 * @param  file: The file name as string.
 * @param  line: The line in file as a number.
 * @retval None
 */
void _Error_Handler(char *file, int line) {
	/* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */
	while (1) {
	}
	/* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/**
 * @}
 */

/**
 * @}
 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
