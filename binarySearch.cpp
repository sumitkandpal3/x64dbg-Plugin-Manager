#include<iostream>
using namespace std;

bool binarySearch(int arr[],int key,int start,int end){
    
    //base case

    if(start>end){
        return 0;
    }
    int mid;
    mid=start+(end-start)/2;
    if(arr[mid]==key){
        return 1;
    }
    else if(arr[mid]<key){
        start=mid+1;
    }
    else if(arr[mid]>key){
        end=mid-1;
    }
    //recursive call
    return binarySearch(arr,key,start,end);
}

int main(){
    int arr[6]={2,4,6,7,8,10};
    int ans= binarySearch(arr,10,0,5);
    cout<<ans<<endl;
}
