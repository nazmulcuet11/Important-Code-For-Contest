int n = 4,k = 2;
vector<int> v;
bool taken[10];

void Combination(int last)
{
    if(v.size()==k)
    {
        for(int i=0;i<v.size();i++)
            cout<<v[i];
        cout<<"\n";
        return;
    }

    for(int i=last+1;i<=n;i++)
    {
        if(!taken[i])
        {
            v.push_back(i);
            taken[i] = true;
            Combination(i);
            v.pop_back();
            taken[i] = false;
        }
    }
}
