#include<stdio.h>
//编写c程序，实现求最大值的过程
#define pi 3.14
int main(){
    int  r;
	float s = 0;
	printf("请输入圆的半径：");
	scanf_s("%d",&r);
	s = pi*r*r;
	printf("%f",s);
	return 0;
}

