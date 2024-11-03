#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int array_random(int qator, int ustun, int arr[qator][ustun]){
    for (int i = 0; i < qator; i++)
    {
        for (int j = 0; j < ustun; j++)
        {
            arr[i][j] = rand()%30 + 10;
        }
        
    }
    
}

void array_print(int qator, int ustun, int arr[qator][ustun]){
    for (int i = 0; i < qator; i++)
    {
        for (int j = 0; j < ustun; j++)
        {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }

    
}

int ikki_random(int qator, int ustun, int arr[qator][ustun]){
    srand(time(NULL));
    for (size_t i = 0; i <  qator; i++)
    {
        for (size_t j = 0; j < ustun; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    
}
int ikki_array_print(int qator, int ustun, int arr[qator][ustun]){
    for (size_t i = 0; i <  qator; i++)
    {
        for (size_t j = 0; j < ustun; j++)
        {
            printf("%d ", arr[i][j]);   
        }
        puts("");
        
    }
    printf("\n");
    
}


int ikki_kvadrat(int qator, int ustun, int arr[qator][ustun]){
    for (size_t i = 0; i <  qator; i++)
    {
        for (size_t j = 0; j < ustun; j++)
        {
            if (arr[i][j] < 10)
            {
                arr[i][j] *= arr[i][j];
            }
            
        }
        
    }
    printf("\n");
    
}

int ikki_print(int qator, int ustun, int arr[qator][ustun]){
    for (size_t i = 0; i <  qator; i++)
    {
        for (size_t j = 0; j < ustun; j++)
        {
            printf("%d ", arr[i][j]);   
        }
        puts("");
        
    }
    printf("\n");

    
}
*/

int array_random(int n, int arr[n][n]){
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            arr[i][j] = rand()%30 +1;
        }
    }
    
} 

int array_print(int n, int arr[n][n]){
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%2d ", arr[i][j]);
        }puts("");
    }
    
} 
int katta = 0, son = 0;
int array_son(int n, int arr[n][n]){
puts("");
    for (size_t i = 0; i < n; i++)
    {
        katta = 0;
        for (size_t j = 0; j < n; j++)
        {
            if (katta < arr[i][j])
            {
                katta = arr[i][j];
                son = j;
            }
            printf("%2d ", arr[i][j]);            
        }
        printf("==> katta => %d => %d son bor\n", katta, son);   
    } 
} 

int main () { system("cls");
    int n; 
    printf("sonni kiritng:  ");
    scanf("%d", &n);
    int arr[n][n];

    // ikki_random(n, n, arr);
    // ikki_array_print(n, n, arr);
    // ikki_kvadrat(n,n, arr);
    // ikki_print(n,n, arr);

    array_random(n, arr);
    array_print(n, arr);
    array_son(n, arr);

    return 0;
}