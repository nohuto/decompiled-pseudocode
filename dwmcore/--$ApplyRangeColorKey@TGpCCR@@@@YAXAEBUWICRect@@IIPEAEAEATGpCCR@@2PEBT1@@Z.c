void __fastcall ApplyRangeColorKey<GpCCR>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        __int64 a7)
{
  int v7; // r10d
  __int64 v9; // rsi
  int v10; // edx
  _BYTE *v11; // rcx
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al

  v7 = 0;
  if ( *(int *)(a1 + 12) > 0 )
  {
    v9 = a2;
    do
    {
      v10 = 0;
      if ( *(int *)(a1 + 8) > 0 )
      {
        v11 = (_BYTE *)(a4 + 3);
        do
        {
          if ( a5[3] > *v11
            || *v11 > a6[3]
            || (v12 = *(v11 - 3), *a5 > v12)
            || v12 > *a6
            || (v13 = *(v11 - 2), a5[1] > v13)
            || v13 > a6[1]
            || (v14 = *(v11 - 1), a5[2] > v14)
            || v14 > a6[2] )
          {
            if ( a7 )
              *v11 = *(_BYTE *)(a7 + 3);
          }
          else
          {
            *(_DWORD *)(v11 - 3) = 0;
          }
          v11 += 4;
          ++v10;
        }
        while ( v10 < *(_DWORD *)(a1 + 8) );
      }
      a4 += v9;
      ++v7;
    }
    while ( v7 < *(_DWORD *)(a1 + 12) );
  }
}
