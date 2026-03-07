__int64 __fastcall MiSplitPfnBitMaps(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r11
  unsigned int v7; // esi
  __int64 *v8; // rbp
  unsigned int i; // edi
  unsigned __int64 v10; // r8
  __int64 v11; // r15
  unsigned __int64 *v12; // r15
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14

  v3 = a2 + a3;
  v4 = a3;
  if ( a2 + a3 > qword_140C65820 + 1 )
    return 0LL;
  v7 = 0;
  v8 = MiLargePageSizes;
  for ( i = 0; i < 4; ++i )
  {
    if ( i >= 2 )
    {
      if ( (unsigned __int16 *)a1 != MiSystemPartition )
        goto LABEL_8;
      v11 = a1 + 16136;
      v10 = 512LL;
    }
    else
    {
      v10 = *v8;
      v11 = a1 + 16008;
    }
    v12 = (unsigned __int64 *)(16LL * i + v11);
    v13 = (~(v10 - 1) & (v4 - 1 + v10 + a2)) / v10;
    if ( !(unsigned int)MiSplitBitmapPages(9, v12[1] + ((a2 / v10) >> 3), 8 * (((v13 + 7) >> 3) - ((a2 / v10) >> 3))) )
      return 0LL;
    v4 = a3;
    if ( v13 > *v12 )
      *v12 = v13;
LABEL_8:
    ++v8;
  }
  if ( !(unsigned int)MiSplitBitmapPages(
                        9,
                        *(_QWORD *)(a1 + 16048) + (a2 >> 9),
                        8 * (((unsigned __int64)(v3 + 511) >> 9) - (a2 >> 9))) )
    return 0LL;
  v14 = (unsigned __int64)(v3 + 0x3FFFF) >> 18;
  v15 = a2 >> 18;
  if ( !(unsigned int)MiSplitBitmapPages(9, *(_QWORD *)(a1 + 16064) + (v15 >> 3), 8 * (((v14 + 7) >> 3) - (v15 >> 3))) )
    return 0LL;
  if ( v14 > *(_QWORD *)(a1 + 16056) )
    *(_QWORD *)(a1 + 16056) = v14;
  LOBYTE(v7) = (unsigned int)MiSplitBitmapPages(9, *(_QWORD *)(a1 + 16072) + 2 * v15, 8 * (2 * v14 - 2 * v15)) != 0;
  return v7;
}
