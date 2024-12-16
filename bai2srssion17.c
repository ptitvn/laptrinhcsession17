#include <stdio.h>
#include <ctype.h>
#include<string.h>

void nhapChuoi(char *s);
void inChuoi(char *s);
int demChuCai(char *s);
int demChuSo(char *s);
int demKyTuDacBiet(char *s);

int main() {
    char chuoi[100];
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapChuoi(chuoi);
                fgets(chuoi, 100, stdin);
                break;
            case 2:
                inChuoi(chuoi);
                break;
            case 3:
                printf("So luong chu cai: %d\n", demChuCai(chuoi));
                break;
            case 4:
                printf("So luong chu so: %d\n", demChuSo(chuoi));
                break;
            case 5:
                printf("So luong ky tu dac biet: %d\n", demKyTuDacBiet(chuoi));
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
void nhapChuoi(char *s) {
    printf("Nhap chuoi:\n");
    fgets(s, 100, stdin); 
}

void inChuoi(char *s) {
    printf("Chuoi vua nhap la: %s\n", s);
}

int demChuCai(char *s) {
    int count = 0;
    while (*s != '\0') {
        if (isalpha(*s)) {
            count++;
        }
        s++;
    }
    return count;
}

int demChuSo(char *s) {
    int count = 0;
    while (*s != '\0') {
        if (isdigit(*s)) {
            count++;
        }
        s++;
    }
    return count;
}

int demKyTuDacBiet(char *s) {
    int count = 0;
    while (*s != '\0') {
        if (!isalpha(*s) && !isdigit(*s) && *s != ' ' && *s != '\n') {
            count++;
        }
        s++;
    }
    return count;
}
