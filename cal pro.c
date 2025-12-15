#include<stdio.h>

int main(){
    double item1,item2,item3,sell,aws;
    scanf("%lf",&item1);
    sell=item1*0.05;aws=item1-sell;
    printf("%.2lf\n",aws);
    scanf("%lf",&item2);
    sell=(item1+item2)*0.15;aws=(item1+item2)-sell;
    printf("%.2lf\n",aws);
    scanf("%lf",&item3);
    sell=(item1+item2+item3)*0.3;aws=(item1+item2+item3)-sell;
    printf("%.2lf\n",aws);

    return 0;
}
