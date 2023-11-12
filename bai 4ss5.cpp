#include <stdio.h> 
int main(){
	float income,salary,tax;
	printf("Nhap tong so thu nhap cua nhan vien: ");
	scanf("%f",&income);
	if(0<income<=5){
		tax=income*0.05;
		salary=income-tax;
	}else if(5<income<=10){
		tax=income*0.1;
		salary=income-tax;
	}else if(10<income<=18){
		tax=income*0.15;
		salary=income-tax;
	}else if(18<income<=32){
		tax=income*0.2;
		salary=income-tax;
	}else if(32<income<=52){
		tax=income*0.25;
		salary=income-tax;
	}else if(52<income<=80){
		tax=income*0.3;
		salary=income-tax;
	}else{
		tax=income*0.35;
		salary=income-tax;
	}
	printf("Tien thue thang nay cua nhan vien la: %.2f trieu\n",tax);
	printf("Tien luong thang nay cua nhan vien la: %.2f trieu\n",salary);
}
