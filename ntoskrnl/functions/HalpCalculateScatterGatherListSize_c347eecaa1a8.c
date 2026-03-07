__int64 __fastcall HalpCalculateScatterGatherListSize(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  __int64 v7; // rbx
  __int64 *v8; // rdi
  int v9; // esi
  int AdapterCacheAlignment; // ebp
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // r11d
  int v14; // eax
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  int v17; // edx
  int v18; // edi
  unsigned int v19; // ecx
  unsigned __int64 v20; // rax
  bool v21; // cc
  unsigned int v22; // edx
  unsigned int v24; // ebp
  bool v25; // cc
  unsigned int v26; // ecx
  int v27; // edx
  bool v28; // cc

  v7 = a4;
  v8 = a2;
  v9 = 0;
  AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1, a2, a3, a3);
  if ( v8 )
  {
    v13 = v11 & 0xFFF;
    v14 = 0;
    v15 = *((_DWORD *)v8 + 8) + *((_DWORD *)v8 + 10) + *((_DWORD *)v8 + 11) - v11;
    v16 = v15;
    if ( v15 >= (unsigned int)v7 )
    {
LABEL_3:
      if ( v15 + 4096 < v13 + (int)v7 )
        return 3221225507LL;
      v17 = AdapterCacheAlignment - 1;
      v18 = v7 + v16 + v13 - v15;
      v19 = (unsigned int)(v18 + 4095) >> 12;
      LODWORD(v20) = v19 + v14;
      if ( ((AdapterCacheAlignment - 1) & v13) != 0 )
      {
        ++v9;
        v21 = v19 <= 1;
      }
      else
      {
        v21 = v19 <= 1;
        if ( v19 == 1 )
        {
          if ( (((_DWORD)v7 + v16 - v15) & v17) == 0 )
            goto LABEL_7;
          goto LABEL_17;
        }
      }
      if ( !v21 && (v18 & v17) != 0 )
      {
LABEL_17:
        ++v9;
        goto LABEL_7;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v8 = (__int64 *)*v8;
      if ( !v8 )
        goto LABEL_3;
      v26 = (v13 + v16 + 4095) >> 12;
      v27 = AdapterCacheAlignment - 1;
      v14 += v26;
      if ( ((AdapterCacheAlignment - 1) & v13) != 0 )
      {
        ++v9;
        v28 = v26 <= 1;
      }
      else
      {
        v28 = v26 <= 1;
        if ( v26 == 1 )
        {
          if ( (v27 & v16) == 0 )
            goto LABEL_32;
          goto LABEL_31;
        }
      }
      if ( v28 || (v27 & (v13 + v16)) == 0 )
        goto LABEL_32;
LABEL_31:
      ++v9;
LABEL_32:
      v16 = *((_DWORD *)v8 + 10);
      v15 += v16;
      v13 = *((_DWORD *)v8 + 11);
      if ( v15 >= (unsigned int)v7 )
        goto LABEL_3;
    }
  }
  v20 = ((unsigned __int64)(v11 & 0xFFF) + v7 + 4095) >> 12;
  v24 = AdapterCacheAlignment - 1;
  if ( (v24 & (unsigned int)v11) != 0 )
  {
    v9 = 1;
    v25 = (unsigned int)v20 <= 1;
  }
  else
  {
    v25 = (unsigned int)v20 <= 1;
    if ( (_DWORD)v20 == 1 )
    {
      v9 = (v24 & (unsigned int)v7) != 0;
      goto LABEL_7;
    }
  }
  if ( !v25 && ((v11 + v7) & v24) != 0 )
    goto LABEL_17;
LABEL_7:
  if ( (unsigned int)v20 > *(_DWORD *)(v12 + 232) )
    return 3221225626LL;
  v22 = 24 * v20 + 16;
  if ( *(_BYTE *)(v12 + 440) || !*(_BYTE *)(v12 + 445) )
  {
    v22 = 24 * v20 + 64;
    if ( v22 < 0xA0 )
      v22 = 160;
  }
  *a5 = v22;
  if ( a6 )
    *a6 = v20;
  if ( a7 )
    *a7 = v9;
  return 0LL;
}
