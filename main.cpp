#include <iostream>

bool checkSort(int* p_arr,int size){
    int* tp_arr = p_arr;
    for(int i=0;i < size-1;){
        if(*tp_arr > *(tp_arr+1)){
            return false;
            }
            tp_arr++;
            i++;
        }
    return true;


}

void arrSort(int* p_arr,int size){
    if(p_arr!=nullptr){
    while(!checkSort(p_arr,size)){
        for(int i=0;i < size-1;){
            if(*p_arr > *(p_arr+1)){
                int temp = *p_arr;
                *p_arr = *(p_arr+1);
                *(p_arr+1) = temp;
            }
            p_arr++;
            i++;
        }
        p_arr -= size-1;
    }
}
    return;
}


void printArr(int* p_arr,int size){
    std::cout << "printing the sorted array of size " << size << " \n";
    for(int i{0}; i <= size-1;){
        std::cout << *p_arr << ' ';
        p_arr++;
        i++;
    }
}

int getSizeFromUser(){
    int size{};
    std::cout << "enter the size of the array: \n";
    std::cin >> size;


    return size;
}

void getArrFromUser(int arr[],int size){
    std::cout << "enter the elements of the array: \n";
    for(int i{0};i < size;){
        std::cin >> arr[i];
        i++;
    }

    return;
}


int main(){
    int size{getSizeFromUser()};
    int arr[size]={};
    getArrFromUser(arr,size);
    arrSort(arr,size);
    printArr(arr,size);


    return 0;
}
