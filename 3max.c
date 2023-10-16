#include<stdio.h>
int main () {
	int a,b,c;
	printf("Nhap so a:");
	scanf("%d", &a);
	printf("Nhap so b:");
	scanf("%d", &b);
	printf("Nhap so c:");
	scanf("%d", &c);
	
	if(a>b && a>c)
		printf("a la so lon nhat");
		
	if(b>a && b>c)
		printf("b la so lon nhat");
		
	if(c>a && c>b)
		printf("c la so lon nhat");

		
}
