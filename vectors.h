//enter the necessary includes - hint 3 different includes needed - google for which includes need to be added for the C functions used
#include <stdio.h>
#include <math.h>
#include <float.h>

typedef struct {
 //enter definition for float fields for x,y,z,length
  float x,y,z,length;
} vector;

//header for vector_init fucniton
vector vector_init(float x, float y, float z);

//header for vector_add function, 
vector vector_add(vector v1, vector v2);

//vector_dot function, 
float vector_dot(vector v1, vector v2);

//vector_normalize function and 
int vector_normalize(vector *v1);

//vector_print function
void vector_print(vector v1);
