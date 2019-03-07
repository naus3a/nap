#include "Nap.hpp"
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <math.h>

int main(int argc, char * argv[]){
    Nap::clear();
    for(int i=0;i<8;i++){
        Nap::setTextColor((Nap::Color)i);
        std::cout<<i;
        Nap::setTextColor((Nap::Color)i, true);
        std::cout<<i;
    }
    Nap::resetTextColor();
    std::cout<<std::endl;
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            int _c = i*16+j;
            Nap::setTextColor256(_c);
            std::cout<<_c<<"\t";
        }
        std::cout<<std::endl;
    }
    Nap::resetTextColor();
    std::cout<<std::endl;

    for(int i=0;i<8;i++){
        Nap::setBgColor((Nap::Color)i);
        std::cout<<i;
        Nap::setBgColor((Nap::Color)i, true);
        std::cout<<i;
    }
    Nap::resetTextColor();
    std::cout<<std::endl;
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            int _c = i*16+j;
            Nap::setBgColor256(_c);
            std::cout<<"  ";
        }
        Nap::resetTextColor();
        std::cout<<std::endl;
    }
    Nap::resetTextColor();
    

    std::cout<<std::endl;
    
    std::cout<<"*";
    double a = 0;
    double aInc = 0.1;
    while(1){
        Nap::clearLine();
        int x = (sin(a)+1)*20;
        Nap::setCol(x);
        a+=aInc;
        std::cout<<"*";
        fflush(stdout);
        usleep(150000);
        //curPos+=inc;
        //if(curPos>20){
        //    bDir = -1;
        //}
        //Nap::setCol(curPos);
        //std::cout<<"*";
        //fflush(stdout);
        //usleep(300000);
    }
}
