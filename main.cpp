/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan, Walcker
 * @data June, 9th 2021
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <istream>
#include <sstream>
#include <iomanip>

using namespace std;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{

    //Permite usar acentos
    setlocale(LC_ALL,"");

    int x = 0;
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    float A, B, C, D, E,y;

    cout << "Digite os números de dois dígitos e aperte enter depois de cada um deles." << endl;
    cout << "Digite um número negativo para sair do programa." << endl;


        while(x >= 0){

        cin >> x;

        if(x >=0 && x<25){
            a++;
        }else if(x >=25 && x<50){
            b++;
        }else if(x >=50 && x<75){
            c++;
        }else if(x >=75 && x<100){
            d++;
        }else if(x < 0){
            
        }else{
          e++;
        }

    }

   //y = static_cast<float>(a/(a+b+c+d+e)*100);
    A = (float) a/(a+b+c+d+e)*100;
    cout << A << endl;

    //return 0;

}
