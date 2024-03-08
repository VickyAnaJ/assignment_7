#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n, int swaps[]) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps[arr[j+1]]++;
                swaps[arr[j]]++;
            }
        }
    }
}

void selectionSort(int arr[], int n, int swaps[])
{
        int i, j, min_idx, temp;

    for (i = 0; i < n-1; i++)
        {
        min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx]){
            min_idx = j;
            
        }


    temp = arr[i];
    arr[i] = arr[min_idx];
    arr[min_idx] = temp;
    swaps[arr[i]]++;
     swaps[arr[min_idx]]++;
       
}
}



int main() {
    int total4 = 0;
    int total1 = 0;
    int total2 = 0;
    int total3 = 0;
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n ;
    n= sizeof(array1) / sizeof(array1[0]);
    
    int num_swaps1[99] = {0}; 
    int num_swaps2[99] = {0}; 
    
   
    bubbleSort(array1, n, num_swaps1);
    bubbleSort(array2, n, num_swaps2);
    
    
    printf("array1 bubble sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", array1[i], num_swaps1[array1[i]]);
    }
    
    for (int i = 0; i < n; i++) {
        total1 += num_swaps1[array1[i]];
    }
    total1/=2;
    printf("%d\n\n", total1);
    
   
    printf("array2 bubble sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", array2[i], num_swaps2[array2[i]]);
    }
    
    for (int i = 0; i < n; i++) {
        total2 += num_swaps2[array2[i]];
    }
    total2/=2;
    printf("%d\n\n", total2);
    
   
    for (int i = 0; i < 99; i++) {
        num_swaps1[i] = 0;
        num_swaps2[i] = 0;
    }
    
    selectionSort(array1, n, num_swaps1);
    selectionSort(array2, n, num_swaps2);
    
    
    printf("array1 selection sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", array1[i], num_swaps1[array1[i]]);
    }
    
    for (int i = 0; i < n; i++) {
        total3 += num_swaps1[array1[i]];
    }
    total3/=2;
    printf("%d\n\n", total3);
   
    printf("array2 selection sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", array2[i], num_swaps2[array2[i]]);
    }
    
    for (int i = 0; i < n; i++) {
        total4 += num_swaps2[array2[i]];
    }
    total4/=2;
    printf("%d\n", total4);
    
    return 0;
}