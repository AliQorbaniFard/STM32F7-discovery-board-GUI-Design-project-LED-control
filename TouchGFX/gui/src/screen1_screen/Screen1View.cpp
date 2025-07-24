#include <gui/screen1_screen/Screen1View.hpp>
#include "main.h"

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

//Button Function body
void Screen1View::ToggleLED()
{
	if( toggleButton1.getState() )		// if toggle button is pressed then ...
	{
		HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);
	}
	else								// if toggle button is released then ...
	{
		HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);
	}
}
