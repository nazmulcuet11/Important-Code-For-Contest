#define SIZE_N 50000

bool ok[SIZE_N];
vector<ll> prime;

void seive()
{
    mem(ok,true);
    for(ll i=2;i<sqrt(SIZE_N)+1;i++)
        if(ok)
            for(ll j=i+i;j<SIZE_N;j+=i)
                ok[j] = false;

    for(ll i=2;i<SIZE_N;i++)
        if(ok[i])
            prime.pb(i);
}
