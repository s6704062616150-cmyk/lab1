#include<stdio.h>

int main(){
    double item1,item2,item3,sell,aws,vat,awspvat;
    scanf("%lf",&item1);
    sell=item1*0.05;aws=item1-sell;
    printf("%.2lf\n",aws);
    scanf("%lf",&item2);
    sell=(item1+item2)*0.15;aws=(item1+item2)-sell;
    printf("%.2lf\n",aws);
    scanf("%lf",&item3);
    sell=(item1+item2+item3)*0.3;aws=(item1+item2+item3)-sell;
    printf("%.2lf\n",aws);
    vat=aws*0.07;awspvat=aws+vat;
    printf("%.2lf\n",awspvat);
    return 0;
}
