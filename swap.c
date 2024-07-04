#include<stdio.h>

int reverse_array(int *a, int n);

int main() {
    int array[] = {1,2,3,4,5};
    printf("The array before: \n");
    for(int i=0; i < 5; i++) {
        printf("%d,",array[i]);
    }
    reverse_array(array,5);
    printf("\nThe array after: \n");
    for(int i=0; i < 5; i++) {
        printf("%d,",array[i]);
    }
    return 0;
}

int reverse_array(int *a, int n) {
    int *temp = a;
    for(int b=0; b<n; b++) {
        a[b] = *(temp+(n-b-1));
    }

}
