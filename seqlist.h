#ifndef __SEQLIST_H__
#define __SEQLIST_H__
#include<string.h>
#define MAX 100
#include<stdlib.h>
typedef int DataType ;
typedef struct Seqlist
{
    int arr[MAX];
	int size;
}Seqlist;

void InitSeqlist(Seqlist seq)
{
	int num=sizeof(seq.arr);
	memset(seq.arr,0,0);
}
void SortList(Seqlist seq)
{
	int i=0;
	int j=0;
	for(i=0;i<seq.size-1;++i)
	{
		for(j=0;j<seq.size-1-i;++i)
		{
			if(seq.arr[j]<seq.arr[j+1])
			{
				DataType tmp=0;
				tmp=seq.arr[j];
				seq.arr[j]=seq.arr [j+1];
				seq.arr [j+1]=tmp;
			}
		}
	}
}
int BinarySearch(Seqlist seq, DataType x)
{
	int left = 0;
	int right = seq.size -1;
	while(left <= right)
   {
		int mid = left-(left-right)>>1;  //没有超出范围的现象
		if(seq.arr[mid] > x)
		{
			right = mid-1;
		}
		else if(seq.arr[mid] == x)
		{
			return mid;;
		}
		else
		{
			left = mid+1;
		}
   }
	return -1;
}
#endif
