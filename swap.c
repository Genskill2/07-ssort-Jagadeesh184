#include <stdio.h>
/*1.swap_max function*/
void swap_max(int arr[],int l,int n){
int max=arr[n];
int index,temp;
for(int i=n;i<l;i++){
if (max<arr[i]){
max=arr[i];
index=i;
}
}
if(max !=arr[n]){
temp=arr[n];
arr[n]=max;
arr[index]=temp;
}
}
/*2.ssort function*/
void ssort(int arr[],int l){
for (int i=0;i<l;i++){
swap_max(arr,l,i);
}}

