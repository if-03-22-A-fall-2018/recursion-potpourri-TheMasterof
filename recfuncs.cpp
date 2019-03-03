#include "recfuncs.h"
#include <stdlib.h>

int calc_array_size(int n){
  if (n > 0)
 {
   return 2 * calc_array_size(n - 1);
 }

return 1;
}

int convert_to_binary(int n){
  if (n == 0)
  {
    return 0;
  }

  return n % 2 + 10 * convert_to_binary(n / 2);
}

int* create_array(int size){
  int finalSize = calc_array_size(size);
  int *array = new int[finalSize];

  for (int i = 0; i < finalSize; i++)
  {
    array[i] = -1;
  }

return array;
}

int calc_factorial(int n){
  if(n==0)
  {
    return 1;
  }
return n*calc_factorial(n-1);
  }

void calc_sums(int* nums, int size, int* out_arr, int* out_arr_bin){

}

CalculationResults perform_calculations(int* nums, int num){
  CalculationResults temp;
  return temp;
}
