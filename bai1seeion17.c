#include <stdio.h>
void nhapMang(int a[], int *n);
void xuatMang(int a[], int n);
int tinhDoDai(int n);
int tinhTong(int a[], int n);
int timMax(int a[], int n);
int main() {
    int a[100], n, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban:\n ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(a, &n);
                break;
            case 2:
                xuatMang(a, n);
                break;
            case 3:
                printf("Do dai mang la: %d\n", tinhDoDai(n));
                break;
            case 4:
                printf("Tong cac phan tu trong mang la: %d\n", tinhTong(a, n));
                break;
            case 5:
                printf("Phan tu lon nhat la: %d\n", timMax(a, n));
                break;
            case 6:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Xin vui long chon lai!\n");
        }
    } while (choice != 6);

    return 0;
}
void nhapMang(int a[], int *n) {
    printf("Nhap so phan tu:\n ");
    scanf("%d", n);
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n) {
    printf("Cac phan tu trong mang la:\n ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int tinhDoDai(int n) {
    return n;
}
int tinhTong(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}
int timMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}
