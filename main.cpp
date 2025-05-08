#include <iostream>

bool checkSort(int* p_arr){

    for(int i=0;i < 4;){
        if(*p_arr > *(p_arr+1)){
            return false;
            }
            p_arr++;
            i++;
        }
    return true;


}

void arrSort(int* p_arr){
    if(p_arr!=nullptr){
    while(!checkSort(p_arr)){
        for(int i=0;i < 4;){
            if(*p_arr > *(p_arr+1)){
                int temp = *p_arr;
                *p_arr = *(p_arr+1);
                *(p_arr+1) = temp;
            }
            p_arr++;
            i++;
        }
        p_arr -= 4;
    }
}
    return;
}


void printArr(int* p_arr){
    for(int i{0}; i <= 4;){
        std::cout << *p_arr << ' ';
        p_arr++;
        i++;
    }
}

int main(){
    int arr[5] = {5,4,9,7,8};
    arrSort(arr);
    printArr(arr);
    

    




    return 0;
}
