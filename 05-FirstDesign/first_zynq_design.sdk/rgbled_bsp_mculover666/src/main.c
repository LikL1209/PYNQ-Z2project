/**
 *   @filename		main.c
 *   @brief				����LED����
 *   @data				 2018/10/18
 *   @author			Mculover666
 */
#include "xil_printf.h"
#include "rgbled_bsp_mculover666.h"

int main()
{
	/* ��ʼ��LED����io */
	RGBled_init();
	print("RGBLED init ok\r\n");

	/* ������io */
	//RGBLED_Statue(OFF);
	RGBLED1_R_Statue(ON);
	RGBLED2_G_Statue(ON);
	print("RGBLED is all on\r\n");

	while(1);

}
