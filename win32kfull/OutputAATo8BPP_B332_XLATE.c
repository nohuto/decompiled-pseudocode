void __fastcall OutputAATo8BPP_B332_XLATE(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v9; // r10

  v9 = (unsigned __int8 *)(a2 + 4);
  if ( a2 + 4 < a3 )
  {
    do
    {
      if ( v9[3] )
        *a4 = *(_BYTE *)((((*(_DWORD *)(a5 + 4LL * *v9) - *a6) & 0x30000 | (*(_DWORD *)(a5 + 4LL * v9[1] + 1024) - a6[1]) & 0x1C0000 | (unsigned __int64)((*(_DWORD *)(a5 + 4LL * v9[2] + 2048) - a6[2]) & 0xE00000)) >> 16)
                       + a9);
      ++a4;
      a6 += 3;
      if ( (unsigned __int64)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)a6 + a8);
      v9 += 4;
    }
    while ( (unsigned __int64)v9 < a3 );
  }
}
