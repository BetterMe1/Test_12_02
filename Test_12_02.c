/*
date：2018/12/02
author:Better_Me1
program:
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

/*1.猜数字游戏*/

//void menu(){
//	printf("**********猜数字游戏********\n");
//	printf("***** 1.play    2.exit *****\n");
//	printf("****************************\n");
//}
//void game(){
//	int number = rand()%100+1;
//	int n = 0;
//	while (1){
//		printf("请输入您猜的数字(1-100):>");
//		scanf("%d", &n);
//		if (n > number){
//			printf("高了！\n");
//		}
//		else if (n < number){
//			printf("低了！\n");
//		}
//		else{
//			printf("恭喜您，猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main(){
//	int input = 0;
//	while (input!=2){
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			srand(time(0));//随机种子
//			game();
//			break;
//		case 2:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

/*2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回-1.（折半查找） */


//int find_number(int number){
//	int n[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//有序数组;
//	int left = 0;
//	int right = sizeof(n) / sizeof(n[0]);
//	int mid = 0;
//	while (left <11 && right>=0){
//		mid = (left + right) / 2;
//		if (number > n[mid]){
//			left = mid + 1;
//		}
//		else if (number < n[mid]){
//			right = mid - 1;
//		}
//		else{
//			return mid;
//			break;
//		}
//	}
//	return -1;
//}
//int main(){
//	int number = 0;
//	printf("请输入你想找的数字:>");
//	scanf("%d", &number);
//	if (find_number(number) == -1){
//		printf("没找到！\n");
//	}
//	else{
//		printf("找到了！下标是:>%d\n", find_number(number));
//	}
//	system("pause");
//	return 0;
//}

/*3.编写代码模拟三次密码输入的场景。最多能输入三次密码，密码正确，提示“登录成功”,密码错误，
可以重新输入，最多输入三次。三次均错，则提示退出程序。*/

//int main(){
//	int key = 0;
//	int k = 123456;
//	int count = 0;
//	while (count < 3){
//		printf("请输入密码:>");
//		scanf("%d", &key);
//		if (key == k){
//			printf("登录成功！\n");
//			break;
//		}
//		else{
//			printf("密码错误！\n");
//		}
//		count++;
//	}
//	if (count>=3){
//		printf("退出程序!\n");
//	}
//	system("pause");
//	return 0;
//}

/*4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，
如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。 */
//void menu(){
//	printf("****************************\n");
//	printf("**** 1.输入字符  2.退出 ****\n");
//	printf("****************************\n");
//}
//void convert(char c){
//	if ((int)c >= 65 && (int)c <= 90){//大写字母
//		printf("%c\n", (int)c + 32);
//	}
//	else if ((int)c >= 97 && (int)c <= 122){//小写字母
//		printf("%c\n", (int)c - 32);
//	}
//}
//
//int main(){
//	int input = 0;
//	char c;//接收字符
//	while (1){
//		menu();
//		fflush(stdin);//由于scanf会接收与用户输入的换行符，fflush(stdin)用来清空换行符
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 1){
//			fflush(stdin);
//			printf("请输入字符:>");
//			scanf("%c", &c);
//			convert(c);
//		}
//		else if (input == 2){
//			break;
//		}
//		else{
//			printf("输入错误，请重新选择！\n");
//		}
//	}
//	system("pause");
//	return 0;
//}


int main(){
	int i = 0;
	double result = 0;
	for (i = 1; i <= 100; i++){
		if (i % 2 != 0){
			result = result + (1.0 / i);
		}
		else{
			result = result - (1.0 / i);
		}
	}
	printf("1/1-1/2+1/3-1/4+1/5…+ 1/99 - 1/100=%f\n", result);
	system("pause");
	return 0;
}
