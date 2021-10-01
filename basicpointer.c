#include<stdio.h>

int main(int argc, char **argv)
{

	int num=20;

	int *ptr;

	int  **ptr1;

	ptr=&num;

	ptr1=&ptr;

	printf("\t\t Address of num        = %p\n \
		ptr hold the address of num = %p\n \
		value at ptr (*ptr)         = %d\n \
		Address of ptr              = %p\n \
		ptr1 holds the address ofptr= %p\n \
		value at ptr1 (**ptr1)      = %d\n \
		variable num contains       = %d\n",&num,ptr,*ptr,&ptr,ptr1,**ptr1,num);

	return 0;

}

