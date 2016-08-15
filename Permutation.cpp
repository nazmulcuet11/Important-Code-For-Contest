int n = 4,k = 2;
vector<int> v;
bool taken[10];

void Combination()
{
    if(v.size()==k)
    {
        for(int i=0;i<v.size();i++)
            cout<<v[i];
        cout<<"\n";
        return;
    }

    for(int i=1;i<=n;i++)
    {
        if(!taken[i])
        {
            v.push_back(i);
            taken[i] = true;
            Combination();
            v.pop_back();
            taken[i] = false;
        }
    }
}
