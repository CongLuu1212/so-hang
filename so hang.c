#include <stdio.h>
int add (int a, int b);

int main() {
	// goi ham lan thu 1 (gia tri co san)
	int result = add(5, 3);
	printf("tong la: %d\n", result);
	// goi ham lan thu 2 (gia tri co san)
	int result2 = add(4, 3);
	printf("tong la: %d\n", result2);
	// nguoi dung nhap gia tri
	int num1, num2;
	printf("nhap so hang thu nhat :");
	scanf("%d", &num1);
	printf("nhap so hang thu hai :");
	scanf("%d", &num2);
	// goi ham lam thu 3 (gai tri do nguoi dung nhap vao)
	int result3 = add(num1, num2);
	printf("tong la: %d\n", result3);
	return 0;
}

int add(int a, int b) {
	printf("\n\n thuc hien tinh cong :\n");
	printf("so hang a = %d\n", a);
	printf("so hang b = %d\n", b);
	return a + b;
}
	
