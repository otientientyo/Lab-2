#include<stdio.h>

main(){
	float top,bottom,height;
	printf("Nhap do dai day nho tai day:    ");
	scanf("%f", &top);
	printf("Nhap do dai day lon tai day:    ");
	scanf("%f", &bottom);
	printf("Nhap do dai chieu cao tai day:     ");
	scanf("%f", &height);
	printf("Dien tich hinh thang can tinh la:  %f",(top+bottom)*height/2);
	
}
