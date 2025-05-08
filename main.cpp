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

void getArrFromUser(int arr[5]){
    std::cout << "enter a 5 element array: \n";
    for(int i{0};i < 5;){
        std::cin >> arr[i];
        i++;
    }

    return;
}


int main(){
    int arr[5] = {};
    getArrFromUser(arr);
    arrSort(arr);
    printArr(arr);
    

    




    return 0;
}
