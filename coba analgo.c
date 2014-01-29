#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[225];
 int i,j,k,l;
 int count=0;
 printf("masukkan string: ");
 gets(s);
 int A=strlen(s);


 for(i=1;i<A;i++){
  k=s[i];
  j=i;
  while(s[j-1]> k && j>0){
   s[j]=s[j-1];
   j=j-1;
  }
  s[j]=k;
 }
 printf("setelah eksekusi: \n");
  for(i=0;i<A;i++){
   printf("%c",s[i]);
  }
 for(i=0;i<A;i++){
  if((s[i]=='a')||(s[i]=='A')){
   count++;
  }
 }
 printf("\n jumlah a=%d",count);
 getch();
// return 1;

	return 0;
}
