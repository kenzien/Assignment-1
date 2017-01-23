#include <stdio.h>
#include "vectors.h"

//vector init function
vector vector_init(float x, float y, float z){
 vector v;
 v.x = x;
 v.y = y;
 v.z = z;
 v.length = sqrt(x*x+y*y+z*z);
	return v;
}

//write vector_add function that takes two vectors as parameters and returns a vector that is the sum of the two vectors
//<--- code goes here
vector vector_add(vector v1, vector v2)
{
 vector v;
 v.x = v1.x + v2.x;
 v.y = v1.y + v2.y;
 v.z = v1.z + v2.z;
 v.length = v1.length + v2.length;	
 
 return v;
}

//write vector_dot function that takes two vectors as parameters and returns a float which is the dot product (look it up if you don't know what a dot product is)
//<--- code goes here
float vector_dot(vector v1, vector v2)
{
	float dot;
	dot = (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z) + (v1.length * v2.length);
}

//write vector_normalize function that takes a pointer to a vector as a parameter and modify the vector by dividing each of the x,y,z components by its length. 
//Check if the length is zero and return 1 if it is zero (unsuccessful normalization) , otherwise return 0 (successful normalization)
//<--- code goes here
int vector_normalize(vector *v1, vector *v2)
{
	if( v2->length == 0){
		printf("Vector was not normalized because length was zero.\n");
		return 1;
	}
	v1->x = v1->x / v2->length;
	v1->y = v1->y / v2->length;
	v1->z = v1->z / v2->length;
	
	return 0;
}

//write vector_print function that prints out the x,y,z and length of a vector on separate lines
//<--- code goes here
void vector_print(vector v1)
{
	printf("%f\n%f\n%f\n%f\n", v1.x, v1.y, v1.z, v1.length);
}
