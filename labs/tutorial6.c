#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// PART 1: FINDING EXTREME VALUES
//
//


int find_max(int arr[], int len){
  int max;
  // YOUR CODE HERE
  return max;
}


int find_min(int arr[], int len){
  // YOUR CODE HERE
}

int find_second_smallest(int arr[], int len){
  int min1, min2;
  // YOUR CODE HERE
  return min2;
}

// PART 2: GET ROW
//
//


// BASIC VECTOR AND MATRIX CODE
struct vector {
  int len;
  int *elements;
};
typedef struct vector Vector;

void print_vec(Vector v){
  for(int i = 0; i < v.len; i++)
    printf("%d ", v.elements[i]);
  printf("\n");
}

struct matrix {
  int nrow;
  int ncol;
  int *elements;
};
typedef struct matrix Matrix;

int idx(Matrix M, int i, int j){
  return i * M.ncol + j;
}

int get_elem(Matrix M, int i, int j){
  return M.elements[idx(M, i, j)];
}

void set_elem(Matrix M, int i, int j, int val){
  M.elements[idx(M, i, j)] = val;
}

void print_mat(Matrix M){
  for(int i = 0; i < M.nrow; i++){
    for(int j = 0; j < M.ncol; j++){
      printf("%d ", get_elem(M, i, j));
    }
    printf("\n");
  }
}
// END OF BASIC VECTOR AND MATRIX CODE


/*
 * get_row: return a vector whose elements are the i-th row of Matrix M
 */
Vector get_row(Matrix M, int i){
  Vector v;
  // YOUR CODE HERE
  // set length
  // set v's elements pointer
  return v;
}

void print_mat2(Matrix M){
  // YOUR CODE HERE
}

Vector get_col(Matrix M, int j){
  Vector v = {M.nrow, malloc(M.nrow * sizeof(int))};
  // YOUR CODE HERE
  return v;
}

/*
 * copy_col:
 * copies the elements of the j-th column of Matrix M
 * to the elements of Vector v
 *
 * Vector v: must have the correct length and have memory allocated.
 */
void copy_col(Matrix M, int j, Vector v){
  for(int i = 0; i < M.nrow; i++){
    v.elements[i] = get_elem(M, i, j);
  }
}


int main(){
  ////////////////////////////////
  // PART 1
  ////////////////////////////////

  // CREATE TEST ARRAYS
  int arr1[] = {1,2,3,4,5};
  int arr2[]; // DEFINE ARRAY WITH REPEATED MAX AND MIN VALUES
  int arr3[]; // DEFINE ARRAY WITH POSITIVE AND NEGATIVE NUMBERS
  int arr4[] = {0};
  
  // TEST FIND MAX AND FIND MIN

  // TEST FIND SECOND SMALLEST

  ////////////////////////////////
  // PART 2
  ////////////////////////////////
  
  // CREATE A TEST MATRIX
  
  // TEST GET ROW

  // TEST: MODIFYING ROW MODIFIES MATRIX

  // TEST PRINT_MATRIX2
  
}
