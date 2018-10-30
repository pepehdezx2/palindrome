//
//  main.cpp
//  palindrome
//
//  Created by Jose Antonio on 16/11/17.
//  Copyright © 2017 Jose Antonio. All rights reserved.
//

#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;
int main() {
    int dos, tres, cuatro, cinco, seis, siete, ocho, nueve, diez, once, doce, mayor;
    cin >> dos >> tres >> cuatro >> cinco >> seis >> siete >> ocho >> nueve >> diez >> once >> doce;
    mayor = 0;
    if (dos>mayor){
        mayor = dos;
    }
    else
        if (tres>mayor){
            mayor = tres;
        }
        else
            if (cuatro>mayor){
                mayor = cuatro;
            }
            else
                if (cinco>mayor){
                    mayor = cinco;
                }
                else
                    if (seis>mayor){
                        mayor = seis;
                    }
                    else
                        if (siete>mayor){
                            mayor = siete;
                        }
                        else
                            if (ocho>mayor){
                                mayor = ocho;
                            }
                            else
                                if (nueve>mayor){
                                    mayor = nueve;   
                                }
                                else
                                    if (diez>mayor){
                                        mayor = diez;   
                                    }
                                    else
                                        if (once>mayor){
                                            mayor = once;   
                                        }
                                        else
                                            if (doce>mayor){
                                                mayor = doce;   
                                            }
    return 0;
}
