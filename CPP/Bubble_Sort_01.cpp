//bubble sort


#include <iostream>
using namespace std;
int main(){
    int arr[]={-1,18,52,-32,90,46,127,87,-90};
    int elements=sizeof(arr)/sizeof(arr[0]);
    cout<<"the no of elements "<<elements<<endl;
    int temp;
    for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++){
        int ptr=0;
       
        while(ptr<=elements-i-2){
            if(arr[ptr]>arr[ptr+1]){
                temp=arr[ptr+1];
                arr[ptr+1]=arr[ptr];
                arr[ptr]=temp;
            }
            ptr++;

        }

        
    }
    for(int x=0;x<elements;x++){
        cout<<"   "<<arr[x];
    }
    return 0;


}
