#include<stdio.h>
main(){
	float toan, ly, hoa;
	printf("Nhap diem toan cua ban o day:   ");
	scanf("%f", &toan);
	printf("\nNhap diem ly cua ban o day:     ");
	scanf("%f", &ly);
	printf("\nNhap diem hoa cua ban o day:    ");
	scanf("%f", &hoa);
	printf("\nTong diem cua ban la:    %f", toan+ly+hoa);
	printf("\nDiem trung binh cua ban la %f", (toan+ly+hoa)/3);
}
