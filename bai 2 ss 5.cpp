#include <stdio.h> 
int main(){
	float doanhthu, hoahong;
	printf("Nhap doanh thu cua dai ly: ");
	scanf("%f", &doanhthu);
	if (doanhthu <= 100000000) {
		hoahong = doanhthu * 0.05; 
	} else if (doanhthu <= 300000000) {
		hoahong = doanhthu * 0.1; 
	} else {
		hoahong = doanhthu *0.2; 
	}
	printf("Hoa hong cua dai ly la: %.f\n", hoahong); 
}

