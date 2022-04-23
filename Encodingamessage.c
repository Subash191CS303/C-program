#include <stdio.h>
int main(void) {
	int test_case;
	int size,a;
	char temp;
	scanf("%d",&test_case);
	while(test_case--){
	scanf("%d",&size);
	char string[size];
	scanf("%s",string);
	if(size%2==0){
	for(a=0;a<=size;a=a+2){
		temp=string[a];
		string[a]=string[a+1];
		string[a+1]=temp;
	}
	printf("%s\n",string);

	for(int c=0;c<size;c++){
		string[c]='z'+'a'-string[c];
		}
	 }
	 printf("%s",string);
	}
	return 0;
}

