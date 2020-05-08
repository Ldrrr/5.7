void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		nums1[i+m]=nums2[i];
	}
	for(i=0;i<nums1Size-1;i++)
	{
		for(j=i+1;j<nums1Size;j++)
		{
			if(nums1[i]>nums1[j])
			{
				t=nums1[i];
				nums1[i]=nums1[j];
				nums1[j]=t;
			}
		}
	}
}
