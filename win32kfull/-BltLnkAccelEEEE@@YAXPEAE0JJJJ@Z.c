void __fastcall BltLnkAccelEEEE(unsigned __int8 *a1, unsigned __int8 *a2, int a3, int a4, int a5, int a6)
{
  int v7; // r10d
  __int64 v9; // rbp
  unsigned __int8 *v10; // rdx
  unsigned __int8 *v11; // rcx
  int i; // r8d
  int v13; // eax
  int v14; // r8d
  signed __int64 v15; // rdx

  v7 = a6;
  if ( a6 )
  {
    v9 = a3;
    do
    {
      --v7;
      v10 = a1;
      v11 = a2;
      for ( i = a5 >> 2; i; --i )
      {
        v13 = *(_DWORD *)v10;
        if ( *(_DWORD *)v10 )
        {
          if ( v13 == -1 )
            *(_DWORD *)v11 = -1;
          else
            *(_DWORD *)v11 |= v13;
        }
        v10 += 4;
        v11 += 4;
      }
      v14 = a5 & 3;
      if ( (a5 & 3) != 0 )
      {
        v15 = v10 - v11;
        do
        {
          *v11 |= v11[v15];
          ++v11;
          --v14;
        }
        while ( v14 );
      }
      a2 += a4;
      a1 += v9;
    }
    while ( v7 );
  }
}
