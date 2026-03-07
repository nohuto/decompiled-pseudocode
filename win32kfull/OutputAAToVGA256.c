__int64 __fastcall OutputAAToVGA256(
        unsigned int *a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 result; // rax
  unsigned __int8 *v10; // r10
  unsigned __int16 *v12; // r11
  unsigned __int16 *v13; // r11
  int v14; // edx
  unsigned __int64 v15; // r9

  result = *a1;
  v10 = (unsigned __int8 *)(a2 + 4);
  if ( (result & 0x80u) == 0LL )
  {
    if ( (unsigned __int64)v10 < a3 )
    {
      result = a9;
      v13 = a6;
      do
      {
        v14 = *v13;
        v15 = (*(_DWORD *)(a5 + 4LL * v10[1] + 1024) - v13[1]) & 0x380000 | (unsigned __int64)((*(_DWORD *)(a5 + 4LL * v10[2] + 2048)
                                                                                              - v13[2]) & 0x70000);
        v13 += 3;
        *a4++ = *(_BYTE *)((((*(_DWORD *)(a5 + 4LL * *v10) - v14) & 0x1C00000 | v15) >> 16) + a9);
        if ( (unsigned __int64)v13 >= a7 )
          v13 = (unsigned __int16 *)((char *)v13 + a8);
        v10 += 4;
      }
      while ( (unsigned __int64)v10 < a3 );
    }
  }
  else if ( (unsigned __int64)v10 < a3 )
  {
    result = a9;
    v12 = a6;
    do
    {
      if ( v10[3] )
        *a4 = *(_BYTE *)((((*(_DWORD *)(a5 + 4LL * *v10) - *v12) & 0x1C00000 | (*(_DWORD *)(a5 + 4LL * v10[1] + 1024)
                                                                              - v12[1]) & 0x380000 | (unsigned __int64)((*(_DWORD *)(a5 + 4LL * v10[2] + 2048) - v12[2]) & 0x70000)) >> 16)
                       + a9);
      ++a4;
      v12 += 3;
      if ( (unsigned __int64)v12 >= a7 )
        v12 = (unsigned __int16 *)((char *)v12 + a8);
      v10 += 4;
    }
    while ( (unsigned __int64)v10 < a3 );
  }
  return result;
}
