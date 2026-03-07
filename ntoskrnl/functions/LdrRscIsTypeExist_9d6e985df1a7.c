__int64 __fastcall LdrRscIsTypeExist(unsigned int *a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  const wchar_t *v5; // r8
  char v7; // r15
  int v8; // ecx
  _DWORD *v9; // rdx
  int v11; // ecx
  _DWORD *v12; // rdx
  int v14; // r12d
  const wchar_t *v15; // rsi
  __int64 v16; // rcx
  int v17; // ecx
  char v18; // al
  int v19; // esi
  const wchar_t *v20; // rdi
  __int64 v21; // rcx
  int v22; // ecx

  v5 = (const wchar_t *)a2;
  if ( !a1 || !a4 )
    return 3221225485LL;
  v7 = 1;
  if ( a2 >= 0x10000 )
  {
    v14 = a1[22] >> 1;
    v15 = (const wchar_t *)((char *)a1 + a1[21]);
    if ( (unsigned int)v15 > 0x10000 )
    {
      while ( v14 > 0 )
      {
        if ( !*v15 )
          goto LABEL_26;
        if ( !wcsicmp(v5, v15) )
        {
          v5 = (const wchar_t *)a2;
          break;
        }
        v16 = -1LL;
        do
          ++v16;
        while ( v15[v16] );
        v17 = v16 + 1;
        v15 += v17;
        v14 -= v17;
        v5 = (const wchar_t *)a2;
      }
    }
    if ( !*v15 || (v18 = 1, v14 <= 0) )
LABEL_26:
      v18 = 0;
    if ( !v18 )
      *a4 |= 0x40000u;
    v19 = a1[26] >> 1;
    v20 = (const wchar_t *)((char *)a1 + a1[25]);
    if ( (unsigned int)v20 > 0x10000 )
    {
      while ( v19 > 0 )
      {
        if ( !*v20 )
          goto LABEL_38;
        if ( !wcsicmp(v5, v20) )
          break;
        v21 = -1LL;
        do
          ++v21;
        while ( v20[v21] );
        v22 = v21 + 1;
        v20 += v22;
        v19 -= v22;
        v5 = (const wchar_t *)a2;
      }
    }
    if ( !*v20 || v19 <= 0 )
LABEL_38:
      v7 = 0;
    if ( !v7 )
      *a4 |= 0x20000u;
  }
  else
  {
    v8 = a1[24] >> 2;
    v9 = (unsigned int *)((char *)a1 + a1[23]);
    do
    {
      if ( --v8 < 0 )
        break;
    }
    while ( (_DWORD)v5 - *v9++ );
    if ( v8 < 0 )
      *a4 |= 0x40000u;
    v11 = a1[28] >> 2;
    v12 = (unsigned int *)((char *)a1 + a1[27]);
    do
    {
      if ( --v11 < 0 )
        break;
    }
    while ( (_DWORD)v5 - *v12++ );
    if ( v11 < 0 )
      *a4 |= 0x20000u;
  }
  return 0LL;
}
