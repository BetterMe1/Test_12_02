/*
date��2018/12/02
author:Better_Me1
program:
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

/*1.��������Ϸ*/

//void menu(){
//	printf("**********��������Ϸ********\n");
//	printf("***** 1.play    2.exit *****\n");
//	printf("****************************\n");
//}
//void game(){
//	int number = rand()%100+1;
//	int n = 0;
//	while (1){
//		printf("���������µ�����(1-100):>");
//		scanf("%d", &n);
//		if (n > number){
//			printf("���ˣ�\n");
//		}
//		else if (n < number){
//			printf("���ˣ�\n");
//		}
//		else{
//			printf("��ϲ�����¶��ˣ�\n");
//			break;
//		}
//	}
//}
//
//int main(){
//	int input = 0;
//	while (input!=2){
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			srand(time(0));//�������
//			game();
//			break;
//		case 2:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

/*2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ�������-1.���۰���ң� */


//int find_number(int number){
//	int n[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//��������;
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
//	printf("�����������ҵ�����:>");
//	scanf("%d", &number);
//	if (find_number(number) == -1){
//		printf("û�ҵ���\n");
//	}
//	else{
//		printf("�ҵ��ˣ��±���:>%d\n", find_number(number));
//	}
//	system("pause");
//	return 0;
//}

/*3.��д����ģ��������������ĳ���������������������룬������ȷ����ʾ����¼�ɹ���,�������
�����������룬����������Ρ����ξ�������ʾ�˳�����*/

//int main(){
//	int key = 0;
//	int k = 123456;
//	int count = 0;
//	while (count < 3){
//		printf("����������:>");
//		scanf("%d", &key);
//		if (key == k){
//			printf("��¼�ɹ���\n");
//			break;
//		}
//		else{
//			printf("�������\n");
//		}
//		count++;
//	}
//	if (count>=3){
//		printf("�˳�����!\n");
//	}
//	system("pause");
//	return 0;
//}

/*4.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���
������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������ */
//void menu(){
//	printf("****************************\n");
//	printf("**** 1.�����ַ�  2.�˳� ****\n");
//	printf("****************************\n");
//}
//void convert(char c){
//	if ((int)c >= 65 && (int)c <= 90){//��д��ĸ
//		printf("%c\n", (int)c + 32);
//	}
//	else if ((int)c >= 97 && (int)c <= 122){//Сд��ĸ
//		printf("%c\n", (int)c - 32);
//	}
//}
//
//int main(){
//	int input = 0;
//	char c;//�����ַ�
//	while (1){
//		menu();
//		fflush(stdin);//����scanf��������û�����Ļ��з���fflush(stdin)������ջ��з�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == 1){
//			fflush(stdin);
//			printf("�������ַ�:>");
//			scanf("%c", &c);
//			convert(c);
//		}
//		else if (input == 2){
//			break;
//		}
//		else{
//			printf("�������������ѡ��\n");
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
	printf("1/1-1/2+1/3-1/4+1/5��+ 1/99 - 1/100=%f\n", result);
	system("pause");
	return 0;
}
