#include <stdio.h>
int main(){
	int minutes;
	int cost = 0;
	printf("Nhap vao so phut su dung: ");
	scanf("%d, &minutes");
	if (minutes <= 50) {
		cost = 25000 + minutes * 600;
	} else if (minutes <= 200) {
		cost = 25000 + 50 * 600 + (minutes - 50) * 400;
	} else {
		cost = 25000 + 50 * 600 + 150 * 400 + (minutes - 200) * 200;
	}
	printf("Cuoc dien thoai la: %d VND\n", cost);
}
