#include<iostream>
using namespace std;

// linearSearchFunctin
int linearSearch(int arr[],int n ,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

// mainFunction
int main(){
    int arr[8]={3,4,5,67,89,1,2,9};

    int index=linearSearch(arr,8,2);
    cout<<"your array index is:"<<index<<endl;

    return 0;
}