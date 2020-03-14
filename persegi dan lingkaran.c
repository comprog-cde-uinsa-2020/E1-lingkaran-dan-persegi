#include <stdio.h>
#include<math.h>

int main(){
int i,j,n;
printf("MASUKKAN NOMOR BARIS\n");
scanf("%d",&n);
for(i = 1; i<=n; i++){
    for(j = 1; j<=n; j++){
      if(i==1 || i==n || j==1 || j==n)
      {
      printf("* ");
      }
      else
      {
      printf("  ");
      }
  }
  printf("\n");
  }

int x,y,a;
printf("MASUKKAN NOMOR BARIS\n");
scanf("%d",&a);
for(x = 1; x<=a; x++){
    for(y = 1; y<=a; y++){
      if((x==1 && x!=y && y!=a) ||(x==a && x!=y && y!=1) ||(y==1 && x!=a && y!=x) ||(y==a && x!=1 && x!=a))
      {
      printf("* ");
      }
      else
      {
      printf("  ");
      }
  }
  printf("\n");
  }
return 0;
}
