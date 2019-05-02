#include<iostream>
using namespace std;

int main(){
        bool lt_switch = true;
        int child,lt;
        int lt_total = 0;
        for(lt = 1;lt <= 100;lt++)
        {
            for(child = 1;child <= 100;child++)
            {
                if(lt % child == 0)
                {
                    if(lt_switch == true)
                    lt_switch = false;
                    else
                        lt_switch = true;
                }
            }
            if(lt_switch)
                lt_total++;
            child = 1;
            lt_switch = true;
        }
        cout<<lt_total;
}
