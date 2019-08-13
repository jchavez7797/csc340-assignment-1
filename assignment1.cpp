
void genRndNums( vector<int>& v, int vec_size, int seed ) 
{
}

void printVec( const vector<int>& v, int vec_size )
{
}

int main() 
{
    vector<int> v;
    genRndNums( v, 100, 9 );
    sort(v.begin(), v.end());
    printVec(v, 100);

    return 0;
}
