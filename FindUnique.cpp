#include<iostream>
using namespace std;

void findUnique(int  arr[],int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans=ans^arr[i];
    }
    cout<<ans;
}

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";   
    }
    cout<<endl;
}
int main(){
    int arr[7]={5,2,2,4,5,6,6};

    printArray(arr,7);
    findUnique(arr,7);
   

}