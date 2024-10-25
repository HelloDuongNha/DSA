#include <stdio.h>

int main() {
    int my_array[] = {7, 12, 9, 4, 11};
    int size = sizeof(my_array) / sizeof(my_array[0]);
    int minVal = my_array[0];

    for(int i = 0; i < size; i++) {
        if(my_array[i] < minVal) {
            minVal = my_array[i];
        }
    }

    printf("Lowest value: %d\n", minVal);
    printf("Size of float: %lu bytes\n", sizeof(float));
    return 0;
}

//C