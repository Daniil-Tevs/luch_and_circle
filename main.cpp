#include <iostream>
#include <fstream>
int main() {
    std::ifstream in("input.txt");
    float M0_x,M0_y,M1_x,M1_y,K_x,K_y,R;
    in>>M0_x>>M0_y>>M1_x>>M1_y>>K_x>>K_y>>R;
    if(M0_x!=M1_x)
    {
        float k,b;
        k=(M1_y - M0_y)/(M1_x - M0_x);
        b=M0_y - (M0_x*(M1_y - M0_y))/(M1_x - M0_x);
        float a=1+k*k,c=K_x*K_x+b*b-2*K_y*b+K_y*K_y-R*R;
        float D=4*(b*k-K_x-K_y*k)*(b*k-K_x-K_y*k)-4*a*c;
        if(D>=0)
            std::cout<<"Peresekaet";
        else
            std::cout<<"Ne peresekaet";
    }
    else if(M0_x==M1_x && M0_y!=M1_y)
    {

    }
    else
        std::cout<<"Points are equal";
    return 0;
}
