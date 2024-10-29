#include<stdio.h>
#include<stdlib.h>
float S1(float n){
    if(n==1) return 1;
    else return S1(n-1)+(1/n);
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    prinf("tong S1 la: %.2f", S1(n));
}