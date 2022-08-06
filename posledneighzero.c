#include <stdio.h>

//Сумму всех элементов последовательности, которые расположены между двумя нулями. Если нули идут друг за другом, то вывести 0.

int main () {
    int a;
    int count=0;
    int sum=0;
    do {
        scanf("%d", &a);
        if (a==0) {
            count+=1;
        }
        if (count==1) {
            if (a!=0) {
                sum+=a;
            }
        }
    }
    while (a!=-9999);
    printf("%d", sum);
    return 0;
}