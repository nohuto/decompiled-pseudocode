/*
 * XREFs of LdrRscIsTypeExist @ 0x180034C60
 * Callers:
 *     LdrIsResItemExist @ 0x180034BD4 (LdrIsResItemExist.c)
 * Callees:
 *     _wcsicmp @ 0x18008E340 (_wcsicmp.c)
 */

__int64 __fastcall LdrRscIsTypeExist(unsigned int *a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  const wchar_t *v5; // r8
  char v7; // r15
  int v8; // ecx
  _DWORD *v9; // rdx
  int v11; // ecx
  _DWORD *v12; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  const wchar_t *v16; // rdi
  int v17; // r14d
  int v18; // r12d
  const wchar_t *v19; // r14
  char v20; // al
  __int64 v21; // rcx
  int v22; // ecx

  v5 = (const wchar_t *)a2;
  if ( !a1 || !a4 )
    return 3221225485LL;
  v7 = 1;
  if ( a2 >= 0x10000 )
  {
    v18 = a1[22] >> 1;
    v19 = (const wchar_t *)((char *)a1 + a1[21]);
    if ( (unsigned int)v19 > 0x10000 )
    {
      while ( v18 > 0 )
      {
        if ( !*v19 )
          goto LABEL_40;
        if ( !wcsicmp(v5, v19) )
        {
          v5 = (const wchar_t *)a2;
          break;
        }
        v21 = -1LL;
        do
          ++v21;
        while ( v19[v21] );
        v22 = v21 + 1;
        v19 += v22;
        v18 -= v22;
        v5 = (const wchar_t *)a2;
      }
    }
    if ( !*v19 || (v20 = 1, v18 <= 0) )
LABEL_40:
      v20 = 0;
    if ( !v20 )
      *a4 |= 0x40000u;
    v17 = a1[26] >> 1;
    v16 = (const wchar_t *)((char *)a1 + a1[25]);
    if ( (unsigned int)v16 > 0x10000 )
    {
      while ( v17 > 0 )
      {
        if ( !*v16 )
          goto LABEL_34;
        if ( !wcsicmp(v5, v16) )
          break;
        v14 = -1LL;
        do
          ++v14;
        while ( v16[v14] );
        v15 = v14 + 1;
        v16 += v15;
        v17 -= v15;
        v5 = (const wchar_t *)a2;
      }
    }
    if ( !*v16 || v17 <= 0 )
LABEL_34:
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
