#include <stdio.h>
int main ()
{
float units,amount,x,y,z,p,q,r;
    printf("************Welcome to Tamil Nadu Electricity Bill Calculator********\n");
    printf("************Please enter units consumed: ");
    scanf("%f",&units);\
    x=units-100.0;
    y=(units-400)*6;
    z=(units-500)*8;
    p=(units-600)*9;
    q=(units-800)*10;
    r=(units-1000)*11;


    if(units<=100.0)
    printf("************ Your bill is: 0 or Zero Rupees\n");
   else if(units<=400)
    printf("************ Your bill is: Rs.%.1f",x*4.5);
    else if(units <=500 && units > 400)
    printf("************ Your bill is: Rs.%.1f", 1350 + y);
    else if(units<=600 && units>500)
    printf("************ Your bill is: Rs.%.1f", 1350+600 + z);
    else if(units<=800 && units>600)
    printf("************ Your bill is: Rs.%.1f", 1350+600+800 + p);
    else if(units<=1000 && units>800)
    printf("************ Your bill is: Rs.%.1f", 1350+600+800+1800 + q);
    else if(units>1000)
    printf("************ Your bill is: Rs.%.1f", 1350+600+800+1800+2000+r);



return 0;

}
