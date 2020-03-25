#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
int n;
void *print_prime();
void main()
{
pthread_t t1;
int r;
printf("enter the value");
scanf("%d",&n);
r=pthread_create(&t1,NULL,print_prime,NULL);
pthread_join(t1,NULL);
exit(0);
}
void *print_prime()
{ int a=0, b=n,i,j,flag;
  for (i = a; i <= b; i++)
    {if (i == 1 || i == 0)
     continue;
     flag = 1;
        for (j = 2; j <= i / 2; ++j)
        { if (i % j == 0)
            { flag = 0;
               break;
            } }
        if (flag == 1)
            printf("%d\t",i);
    }
    return 0;
}




