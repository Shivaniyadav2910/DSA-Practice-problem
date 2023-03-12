#include<iostream>
using namespace std;

void shiftall(int arr[],int start,int end){
    while(start<=end){
        if(arr[start]<0 && arr[end]>0){
            start++;
            end--;
        }else if(arr[start]>0 && arr[end]<0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }else if(arr[start]<0 && arr[end]<0){
            start++;
        }else{
            end--;
        }
    }
}

void display(int arr[],int end){
    for(int i=0; i<=end; i++){
        cout<<arr[i]<<" ,";
    }
    cout<<endl;
}

int main(){
    int arr[7]={-12,11,-13,-5,6,-7,5};
    
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    shiftall(arr,0,arr_size-1);
    display(arr,arr_size-1);
   
}