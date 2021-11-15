#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;

double add(double, double);
double substract(double, double);
double multiply(double, double);
double divide(double, double);

int main(){
    double num1=0, num2=0, value=0, flag=0;
    char operate;

    //operate
    while(1){
        printf("電子計算機\n");
        cout << setw(10) << value << endl;
        if(!flag){
            scanf("%lf %c %lf", &num1, &operate, &num2);
        }
        else{
            num1 = value;
            scanf(" %c", &operate);
            if(operate == 'c'){
                printf("歸零\n");
                system("pause");
                system("cls");
                return main();
            }
            else{
                scanf("%lf", &num2);
            }
        }

        switch(operate){
            case '+':
                value = add(num1, num2);
                flag=1;
                break;
            case '-':
                value = substract(num1, num2);
                flag=1;
                break;
            case '*':
                value = multiply(num1, num2);
                flag=1;
                break;
            case '/':
                value = divide(num1, num2);
                flag=1;
                break;
            case 'c':
                break;
            default:
                printf("輸入錯誤\n");
                system("pause");
                system("cls");
                return main();
                break;
        }
        printf("%lf\n", value);

        system("cls");
    }
    return 0;
}

double add(double n1, double n2){
    return (n1+n2);
}
double substract(double n1, double n2){
    return (n1-n2);
}

double multiply(double n1, double n2){
    return (n1*n2);
}
double divide(double n1, double n2){
    if(n2==0){
        printf("無法除以零\n");
        system("pause");
        system("cls");
        return main();
    }
    else
        return (n1/n2);
}
