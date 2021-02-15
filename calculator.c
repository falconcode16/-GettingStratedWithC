
#include<stdio.h>
#include<math.h>

main()
{
    float a,b,c,sum,sub,mul,div;

char ch;

printf("enter any choice\n");

scanf("%c",&ch);
if (ch=='+')
{
    printf("enter any two numbers");
    scanf("%f %f",&a,&b);
    sum=a+b;
    printf("sum=%f\n",a,b,sum);

}else if (ch=='-')
{
    printf("enter 2 numbers\n");
    scanf("%f",&sub);
   sub=a-b;
    printf("sub=%f\n",sub);


}
else if (ch=='*')
{
 printf("enter 2 numbers\n");
    scanf("%f",&mul);
   mul=a*b;
    printf("mul=%f\n",mul);
}
 else if (ch=='/')
   {
 printf("enter 2 numbers\n");
    scanf("%f",&div);
   div=a/b;
    printf("div=%f\n",div);
   }


else
{
     printf("invalid");
}


}



