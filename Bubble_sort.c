#include <stdio.h>

void printarray(int* A, int n){
    for(int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j<n-1-i; j++){
            {
             if (A[j]>A[j+1]){
                 temp = A[j];
                 A[j] = A[j+1];
                 A[j+1] = temp;
             }    
            }
        }
    }
}

void bubbleSortAdaptive(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return;
        }
    }
}
int main(){
    int A[] = {12, 54, 65, 7, 23, 9};
    int n=6;
    printarray(A, n);
    bubbleSort(A, n);
    printarray(A, n);
    return 0;
}