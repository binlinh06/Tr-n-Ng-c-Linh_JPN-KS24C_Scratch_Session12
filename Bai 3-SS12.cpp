#include<stdio.h>
long long tinhGiaiThua(int n) {
    long long giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}
int main() {
    int n;
    printf("Nhap mot so nguyen de tinh giai thua: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Khong the tinh giai thua cho so am.\n");
    } else {
        long long ketQua = tinhGiaiThua(n);
        printf("Giai thua cua %d la: %lld\n", n, ketQua);
    }
    return 0;
}
