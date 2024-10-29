#include<stdio.h>
int S3(int n){
	if(n==1) return 1;
	else
		if(n%2==0) return S3(n-1)-n;
		else return S3(n-1)+n;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("tong S3 la: %d", S3(n));
}