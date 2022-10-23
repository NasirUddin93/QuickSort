#include<stdio.h>
int A[] = {6,5,8,9,3,10,15,12,16,};
int partition(int l,int h){
    int pivot,i,j,t;
    pivot = A[l];
    i=l;
    j=h;
    while(i<j){
        do{
            i++;
        }while(A[i]<=pivot);
        do{
            j--;
        }while(A[j]>pivot);
        if(i<j){
            t = A[i];
            A[i] = A[j];
            A[j] = t;

        }

    }
    t = A[l];
    A[l] = A[j];
    A[j] = t;
    return j;
}


void QuickSort(int l,int h){
    if(l<h){
        int j;
        j=partition(l,h);
        QuickSort(l,j);
        QuickSort(j+1,h);
    }
}

int main(){
    QuickSort(0,8);
    for(int i=0;i<9;i++){
        printf("%d, ",A[i]);
    }
}
