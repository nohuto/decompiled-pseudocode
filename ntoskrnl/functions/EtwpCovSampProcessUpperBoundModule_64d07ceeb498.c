__int64 __fastcall EtwpCovSampProcessUpperBoundModule(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  int v5; // edx

  v2 = *(_DWORD *)(a1 + 32);
  v3 = -1;
  if ( v2 )
  {
    do
    {
      v5 = (int)(v2 - v3) / 2 + v3;
      if ( a2 >= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v5) )
      {
        v3 += (int)(v2 - v3) / 2;
        v5 = v2;
      }
      v2 = v5;
    }
    while ( v3 + 1 != v5 );
  }
  return v2;
}
