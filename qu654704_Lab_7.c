#include <stdio.h>

void bubbleSort(int array[], int size) {

  for (int step = 0; step < size - 1; ++step) {
    int stepcount = 0;
    for (int i = 0; i < size - step - 1; ++i) {
      
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        stepcount++;
      }
    }
    printf("Index %d, Steps %d \n", step,stepcount);
  }
}


int main() {
  int data[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);
  
}