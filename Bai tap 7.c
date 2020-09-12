#include<stdio.h>
#include<conio.h>
main(){
	double d, a, b1,b2;
	printf("Nhap duong kinh hinh tron:    ");
	scanf("%lf",&d);

	printf("Nhap do dai canh hinh vuong:   ");
	scanf("%lf", &a);

	printf("Nhap do dai canh thu 1 hinh chu nhat ");
	scanf("%lf", &b1);
	printf("Nhap do dai canh thu 2 hinh chu nhat ");
	scanf("%lf", &b2);
	
	printf("Chu vi hinh tron co duong kinh la %lf la %lf", d, d*3.14);
	printf("\nDien tich hinh tron co duong kinh la %lf la %lf",d, d*d*3.14/4);
	
	printf("\nChu vi hinh Vuong co canh la %lf la %lf", a, a*4);
	printf("\nDien tich hinh Vuong co canh la %lf la %lf",a, a*a);
	
	printf("\nChu vi hinh chu nhat co 2 canh la %lf va %lf : %lf", b1, b2, (b1+b2)*2);
	printf("\nDien tich hinh chu nhat co 2 canh la %lf va %lf : %lf",b1,b2, b1*b2);
	
}
