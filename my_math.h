#ifndef MY_MATH_H_INCLUDED
#define MY_MATH_H_INCLUDED
#include <math.h>
int giai_thua(int n)
   {
       if(n==0||n==1)
        return 1;
       return n*giai_thua(n-1);
   }
 float ptb2(int a,int b, int c,float *x1,float *x2,float *delta1)
  {
      float delta;
      delta=b*b-4*a*c;
      if(delta<0)
        return delta;
      if(delta==0)
      {
      *delta1=delta;
      return -b/(2*a);
      }
      *x1=(-b+sqrt(delta))/(2*a);
      *x2=(-b-sqrt(delta))/(2*a);
      return delta;
  }

#endif // MY_MATH_H_INCLUDED
