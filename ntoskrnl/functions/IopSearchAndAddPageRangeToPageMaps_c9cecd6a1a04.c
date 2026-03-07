__int64 __fastcall IopSearchAndAddPageRangeToPageMaps(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v6; // r10
  __int64 v11; // r13
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r11
  __int64 *v15; // r8
  _QWORD *v16; // rax
  __int64 i; // r9
  unsigned __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 j; // rax
  unsigned __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r8

  v6 = a4;
  if ( a3 )
  {
    v11 = *(_QWORD *)(a2 + 8);
    v12 = a4 + a5;
    do
    {
      if ( v12 <= v6 )
        break;
      v13 = 0LL;
      v14 = v11 + 8 * ((v12 - 1) >> 6);
      v15 = (__int64 *)(v11 + 8 * (v6 >> 6));
      v16 = v15 + 1;
      for ( i = ((1LL << (v6 & 0x3F)) - 1) | *v15; ; i = *v15 )
      {
        v18 = ~i;
        if ( v18 )
          break;
        if ( (unsigned __int64)v16 > v14 )
          goto LABEL_11;
        ++v15;
        ++v16;
      }
      _BitScanForward64((unsigned __int64 *)&v19, v18);
      v20 = (unsigned int)v19 + (((__int64)v15 - v11) >> 3 << 6);
      if ( v20 > v12 )
      {
LABEL_11:
        v20 = v12;
        goto LABEL_21;
      }
      for ( j = ~(v18 | ((1LL << v19) - 1)); !j; j = *v22 )
      {
        v22 = (unsigned __int64 *)(v15 + 1);
        if ( (unsigned __int64)(v15 + 1) > v14 )
        {
          LODWORD(j) = 64;
          goto LABEL_18;
        }
        ++v15;
      }
      _BitScanForward64(&j, j);
LABEL_18:
      v23 = v12;
      v24 = ((__int64)v15 - v11) >> 3 << 6;
      if ( v24 + (unsigned __int64)(unsigned int)j <= v12 )
        v23 = v24 + (unsigned int)j;
      v13 = v23 - v20;
LABEL_21:
      if ( !v13 )
        break;
      if ( v13 > *a3 )
      {
        IopAddPageRangeToPageMaps(a1, (__int128 *)a2, v20, *a3, a6);
        *a3 = 0LL;
        return 3221225507LL;
      }
      IopAddPageRangeToPageMaps(a1, (__int128 *)a2, v20, v13, a6);
      *a3 -= v13;
      v6 = v13 + v20;
    }
    while ( v13 + v20 < v12 );
  }
  else
  {
    IopAddPageRangeToPageMaps(a1, (__int128 *)a2, a4, a5, a6);
  }
  return 0LL;
}
