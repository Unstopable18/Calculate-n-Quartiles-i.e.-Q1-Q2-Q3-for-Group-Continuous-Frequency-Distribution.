#include<iostream>
using namespace std;
int main()    
{
    int n, i,medclass;
    float h[50],cf[50],farr[50],larr[50],uarr[50],fsum=0,N4,N2,N3,fsum3,p1,p2,quart;
    cout<<"**********************************************";
    cout<<"\nEnter Total No. of Elements = ";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number of Lower Limit Elements: ";
     cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>larr[i];  
    }
    cout<<"\nEnter "<<n<<" Number of Upper Limit Elements: ";
     cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>uarr[i];  
    }
    cout<<"\nEnter "<<n<<" Number of Frequency  Elements: ";
     cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>farr[i];
        fsum = fsum+farr[i];
    }
    cout<<"\nSum of Frequency Elements = "<<fsum;
    for(i=0; i<n; i++)
    {
        cf[0]=farr[0];
        {
         for(i=1;i<n;i++)
         cf[i]=(cf[i-1]+farr[i]);
        }
    }
    for(i=0; i<n; i++)
    {
        h[i]=(uarr[i]-larr[i]);
    }
    cout<<"\n\nCommulative frequency  for respective X and F \nLL----UL----F ----CF\n";
    for(i=0;i<n;i++)
    {
        cout<<larr[i]<<"----"<<uarr[i]<<"----"<<farr[i]<<"----"<<cf[i];
        cout<<endl;
    }
    N4=fsum/4;
    N2=fsum/2;
    fsum3=3*fsum;
    N3=fsum3/4;
    for(i=0;i<n;i++)
    {
        if (cf[i]>=N4)
        {
            medclass=i;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        p1=h[medclass]/(farr[medclass]);
        p2=N4-(cf[medclass-1]);
      quart=larr[medclass]+p1*p2;  
    }
    cout<<"**********************************************\n";
    cout<<"\nValue of N/4 ="<<N4;
    cout<<"\nQuartile class\t"<<larr[medclass]<<"-"<<uarr[medclass];
    cout<<"\nQ1 = "<<quart;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if (cf[i]>=N2)
        {
            medclass=i;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        p1=h[medclass]/(farr[medclass]);
        p2=N2-(cf[medclass-1]);
      quart=larr[medclass]+p1*p2;  
    }
    cout<<"\nValue of N/2 ="<<N2;
    cout<<"\nQuartile class\t"<<larr[medclass]<<"-"<<uarr[medclass];
    cout<<"\nQ2 = "<<quart;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if (cf[i]>=N3)
        {
            medclass=i;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        p1=h[medclass]/(farr[medclass]);
        p2=N3-(cf[medclass-1]);
      quart=larr[medclass]+p1*p2;  
    }
    cout<<"\nValue of 3N/4 ="<<N3;
    cout<<"\nQuartile class\t"<<larr[medclass]<<"-"<<uarr[medclass];
    cout<<"\nQ3 = "<<quart;
    cout<<"\n**********************************************";
    cout<<endl;
    return 0;
}