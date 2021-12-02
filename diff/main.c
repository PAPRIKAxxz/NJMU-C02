#include <stdio.h>
#define N 16
typedef struct{
char num[10];
int s;
    }STREC;
int fun(STREC a[])
{

    int i,j;
STREC t;

    for(i=0;i<N;i++)
    for(j=i; j< N; j++)
   {
     if(a[i].s<a[j].s)
     {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
     }
   }
}
int main(){
    STREC s[N] ={{"GA005",85},{"GA003",76},{"GA002",69},{"GA004",85},{"GA001",91}, {"GA007",72},{"GA008",64},{"GA006",87},{"GA015",85},{"GA013",91},{"GA012",64},{"GA014",91},{"GA011",66},{"GA017",64},{"GA018",64},{"GA016",72}};
int i;
fun(s);
    for(int i=0; i < N; i++)
    {

        printf("%s %4d",s[i].num,s[i].s);
    }
}

