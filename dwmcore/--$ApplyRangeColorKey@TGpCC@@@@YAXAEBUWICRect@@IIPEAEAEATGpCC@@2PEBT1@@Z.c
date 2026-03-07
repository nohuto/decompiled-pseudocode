void __fastcall ApplyRangeColorKey<GpCC>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        __int64 a7)
{
  int i; // r10d
  int v9; // r11d
  _BYTE *v10; // rcx
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al

  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    v9 = 0;
    if ( *(int *)(a1 + 8) > 0 )
    {
      v10 = (_BYTE *)(a4 + 3);
      do
      {
        if ( a5[3] > *v10
          || *v10 > a6[3]
          || (v11 = *(v10 - 1), a5[2] > v11)
          || v11 > a6[2]
          || (v12 = *(v10 - 2), a5[1] > v12)
          || v12 > a6[1]
          || (v13 = *(v10 - 3), *a5 > v13)
          || v13 > *a6 )
        {
          if ( a7 )
            *v10 = *(_BYTE *)(a7 + 3);
        }
        else
        {
          *(_DWORD *)(v10 - 3) = 0;
        }
        v10 += 4;
        ++v9;
      }
      while ( v9 < *(_DWORD *)(a1 + 8) );
    }
    a4 += a2;
  }
}
