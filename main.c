#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

    int a=0,b=0;
	float fin=0;
	
	printf("분자를 입력하세요:\n");
	scanf("%i", &a);
	
	printf("분모를 입력하세요:\n");
	scanf("%i",&b);
	
	fin= (float)a/b;
	printf("나누기의 결과는 %f 입니다.\n ", fin);
	
	return 0;
}
