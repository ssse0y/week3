#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

    int b=0;
	float a=0,fin=0;
	
	printf("���ڸ� �Է��ϼ���:\n");
	scanf("%i", &a);
	
	printf("�и� �Է��ϼ���:\n");
	scanf("%i",&b);
	
	fin= (float)a/b;
	printf("�������� ����� %f �Դϴ�.\n ", fin);
	
	return 0;
}
