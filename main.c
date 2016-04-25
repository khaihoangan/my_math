#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"
int main()
{
    int a,b,c,n,m; /* m la so ban nhap de chon chuong trinh*/
    float x1,x2,ket_qua,delta;
    printf("\n=====================DAY LA CHUONG TRINH TINH TOAN TONG HOP=====================");
    printf("\nNhan 1 de tinh giai thua ");
    printf("\nNhan 2 de tinh nghiem bac 2");
    printf("\nXin moi ban nhap:");
    scanf("%d",&m);
    while (m>2||m<1)
    {
        printf("\nSo ban nhap lon hon 2\nXin moi nhap lai");
        scanf("%d",&m);
    }
    switch (m)
    {
    case 1:
        {
         printf("\nNhap N:");
         scanf("%d",&n);
         giai_thua(n);
         printf("\nGiai thua cua %d=%d",n,giai_thua(n));
         break;
        }
    case 2:
        {
            printf("\nNhap a,b,c\n");
            scanf("%d%d%d",&a,&b,&c);
            while(a==0)
            {
                printf("\nSo A ban nhap bang 0\nXin moi nhap lai:");
                scanf("%d",&a);
            }
            ket_qua=ptb2(a,b,c,&x1,&x2,&delta);
            if(ket_qua<0)
            {
                if(delta<0)
                    printf("\nPhuong trinh vo nghiem");
            }
            if(ket_qua==0)
                printf("\nPhuong trinh co 1 nghiem duy nhat\nX=%.2f",ket_qua);
            else
                printf("\nPhuong trinh co 2 nghiem\nX1=%0.2f\nX2=%0.2f",x1,x2);
            break;
        }
    }
    return 0;
}
