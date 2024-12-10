#include <stdio.h>

int timSoLonNhat(int arr[], int kichThuoc) {
    int max = arr[0]; 
    for (int i = 1; i < kichThuoc; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int mang[] = {3, 5, 7, 2, 8, -1, 4, 10, 6}; 
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); 

    int max = timSoLonNhat(mang, kichThuoc);

    printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}

