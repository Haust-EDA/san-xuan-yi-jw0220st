//请在下方输入你的代码：
/**key.c
  #include "stm32f10x.h"                  
#include "Delay.h"
#include "OLED.h"
#include "Key.h"
extern uint8_t KeyNum;
int main(void)
{
	uint8_t i=1;
	OLED_Init();
	Key_Init();
	OLED_ShowString(0,50,"KeyNum:",OLED_8X16);
	
	
	
	
	
	while(1)
	{
		KeyNum=Key_GetNum();
		OLED_ShowNum(55,50,KeyNum,5,OLED_8X16);
		OLED_Update();
		
		if(KeyNum==1)
		{
			i++;
			if(i>3)
				i=0;
		}
	
		if(i==1)
		{
			OLED_ShowChinese(0,0,"我靠NB");
			OLED_Update();
			OLED_Clear();
		}

		if(i==2)
			{
				OLED_ShowChinese(0,0,"老子最牛");
				OLED_Update();
				OLED_Clear();
			}
		if(i==3)
		{
			OLED_ShowChinese(0,0,"耶耶耶");
			OLED_Update();
			OLED_Clear();
		}
	}
 }
 **/

#include "stm32f10x.h"                 
#include "Delay.h"
#include "OLED.h"
#include "Key.h"
extern uint8_t KeyNum;
int main(void)
{
	uint8_t i=1;
	OLED_Init();
	Key_Init();
	OLED_ShowString(0,50,"KeyNum:",OLED_8X16);
	
	
	
	
	
	while(1)
	{
		KeyNum=Key_GetNum();
		OLED_ShowNum(55,50,KeyNum,5,OLED_8X16);
		OLED_Update();
		
		if(KeyNum==1)
		{
			i++;
			if(i>3)
				i=0;
		}
	
		if(i==1)
		{
			OLED_ShowChinese(0,0,"我靠NB");
			OLED_Update();
			OLED_Clear();
		}

		if(i==2)
			{
				OLED_ShowChinese(0,0,"老子最牛");
				OLED_Update();
				OLED_Clear();
			}
		if(i==3)
		{
			OLED_ShowChinese(0,0,"耶耶耶");
			OLED_Update();
			OLED_Clear();
		}
	}
}
	


	
