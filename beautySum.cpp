class Solution {
public:

    int minEl(int freq[])
    {
        int mins=INT_MAX;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
            mins=min(mins,freq[i]);
            }
        }
        return mins;
    }

    int maxEl(int freq[])
    {
        int maxi=INT_MIN;
        for(int i=0;i<26;i++){
            maxi=max(maxi,freq[i]);
        }
        return maxi;
    }

    int beautySum(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int freq[26]={0};
            for(int j=i;j<n;j++)
            {
                freq[s[j]-'a']++;
                int ans=maxEl(freq)-minEl(freq);
                sum+=ans;
            }
        }
        return sum;
    }
};
