#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b)
	    printf("YES");
	else if(a==c)
	    printf("YES");
	else
	    printf("NO");
	return 0;
}

