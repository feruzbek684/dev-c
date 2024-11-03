#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int todir(int size, int arr[size][size]){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
}

int chiqar(int size, int arr[size][size]){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }puts("");
        
    }
}

int diogonal(int size, int arr[size][size]){
    int sum = 0;
    int yig = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                sum = sum + arr[i][j];
            }
             if(i + j + 1 == size){
                yig = yig + arr[i][j];
            }else if(sum > yig){
                if (i == j)
                {
                    printf("%d ", arr[i][j]);
                }
            }else{
                if (i + j + 1 == size)
                {
                    printf("%d ", arr[i][j]);
                }
                
            } 
        }
        
    }
}

int main () {
    int n;
    printf("n: ");
    scanf("%d", &n);
    int arr[n][n];

    todir(n, arr);
    puts("");
    chiqar(n, arr);
    puts("");
    diogonal(n, arr);
    puts("");
}