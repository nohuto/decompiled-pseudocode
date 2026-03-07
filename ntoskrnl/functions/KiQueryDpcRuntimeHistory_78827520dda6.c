char __fastcall KiQueryDpcRuntimeHistory(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  int v4; // r10d
  __int64 v5; // r9
  __int64 v6; // rdx
  char v7; // cl

  v3 = *(_QWORD *)(a1 + 13072);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(v3 + 4) >> 5;
  v5 = a2 & (-1LL << (*(_BYTE *)(v3 + 4) & 0x1F));
  if ( v4 )
  {
    v6 = *(_QWORD *)(v3 + 8)
       + 8LL
       * ((37
         * (BYTE6(v5)
          + 37
          * (BYTE5(v5)
           + 37
           * (BYTE4(v5) + 37 * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (BYTE1(v5) + 37 * ((unsigned __int8)v5 + 11623883)))))))
         + HIBYTE(v5)) & (unsigned int)(v4 - 1));
    v7 = 1;
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v5 == ((-1LL << (*(_BYTE *)(v3 + 4) & 0x1F)) & *(_QWORD *)(v6 + 8)) )
      {
        if ( !v6 )
          return 0;
        *a3 = *(_QWORD *)(v6 + 16);
        return v7;
      }
    }
  }
  return 0;
}
