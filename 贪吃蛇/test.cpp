////时间：2019年7月13日15:36:03
////画面闪烁的原理和方法
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//
////int型二维数组
//int g_arrBackground[20][23] = {
//		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };
//
////char型二维数组
//char g_strGameBack[20][48] = {
//	"■■■■■■■■■■■■■■■■■■■■■■■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",        //方块占两个字节 两个字符位
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■                                          ■\n",
//	"■■■■■■■■■■■■■■■■■■■■■■■\n" };
//
////char型一维数组
//char g_strGameBack1[960] = { "■■■■■■■■■■■■■■■■■■■■■■■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■                                          ■\n■■■■■■■■■■■■■■■■■■■■■■■\n" };
//
//
////采用int型二维数组刷新画面，每一个数据一个printf
//void show1()            //printf调用460次，show1画面较show2闪烁频率高
//{
//	int i = 0, j = 0;
//	while (1)
//	{
//		system("cls");
//		for (i = 0; i < 20; i++)
//		{
//			for (j = 0; j < 23; j++)
//			{
//				if (1 == g_arrBackground[i][j])
//					printf("■");         ////方块占两个字节 两个字符位
//				else
//					printf("  ");        //空格占一个字符，一次输出两个空格
//			}
//			printf("\n");
//		}
//		Sleep(1000);
//	}
//}
//
////采用char型二维数组刷新画面,每一行一个printf
//void show2()              //printf调用20次，show2画面较show1闪烁频率低
//{
//	int i = 0;
//	while (1)
//	{
//		system("cls");
//		for (i = 0; i < 20; i++)
//		{
//			printf(g_strGameBack[i]);
//		}
//		Sleep(1000);      //到下一条语句间隔1s,刷新频率，  每隔1s刷新画面，更新当前界面，包括贪吃蛇状态和界面
//	}
//}
//
////采用char型一维数组刷新画面,一个printf打印所有背景
//void show3()         //把960个字符放在一个数组，把printf调用1次，最后一个字符与第一个字符之间的时间间隔更低，闪烁频率更低，但是不好写，不易更改，易出错
//{
//	while (1)
//	{
//		system("cls");
//		printf(g_strGameBack1);
//		Sleep(1000);
//	}
//}
//
//
//int main()
//{
//	//show1();
//	//show2();   //推荐
//	show3();
//
//	system("pause");
//
//	                       
//	return 0;
//}