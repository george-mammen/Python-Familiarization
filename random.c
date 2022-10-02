#include<stdio.h>

int main() {
    int arr[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%d",&arr[i]);
    }
    
    int tgt;
    scanf("%d", &tgt);
    
    for(int i = 0; i < 10 ; i++) {
        for (int j = i + 1; j < 10; j++) {
            if(arr[i] + arr[j] == tgt) {
                printf("[%d,%d]",i,j);
                break;
            }
        }
    }
}