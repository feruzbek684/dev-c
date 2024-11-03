#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int kirit_array (int a[], int size);

int toldir_array(int array[], int size);


int main () {
    int n;
    printf("n: ");
    scanf("%d", &n);
    int massiv[n];

    kirit_array(massiv, n);

    toldir_array(massiv, n);


    int vaqtincha = 0;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (massiv[j] > massiv[j + 1])
            {
                vaqtincha = massiv[j];
                massiv[j] = massiv[j + 1];
                massiv[j + 1] = vaqtincha;
            }
            
        }
        
    }

    toldir_array(massiv, n);
    

    return 0;
    
}



int kirit_array(int a[], int size){
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
}



int toldir_array(int array[], int size){
    printf("\nqiymatlar ==> ");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}