/*
 * XREFs of _CmMergeFilterLists @ 0x140A667FC
 * Callers:
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A6517C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A65A54 (_CmGetInstallerClassCompoundFiltersWorker.c)
 * Callees:
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     _PnpMultiSzAppend @ 0x140839FAC (_PnpMultiSzAppend.c)
 *     _CmFindFilterListInflectionPoint @ 0x140A64E80 (_CmFindFilterListInflectionPoint.c)
 */

__int64 __fastcall CmMergeFilterLists(
        wchar_t *Str1,
        wchar_t *a2,
        wchar_t *a3,
        wchar_t *a4,
        unsigned int a5,
        unsigned int *a6)
{
  wchar_t *v6; // rax
  wchar_t *v7; // r15
  unsigned int v8; // r12d
  wchar_t *v9; // rbx
  int v10; // r14d
  unsigned int v11; // r13d
  const wchar_t *FilterListInflectionPoint; // rsi
  const wchar_t *v13; // rdi
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rax
  const wchar_t *i; // rdi
  __int64 v19; // rax
  int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rax
  int v26; // edi
  unsigned int v27; // r14d
  wchar_t *v29; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v30; // [rsp+28h] [rbp-10h]
  wchar_t *Str1a; // [rsp+80h] [rbp+48h]
  wchar_t *v32; // [rsp+88h] [rbp+50h]
  wchar_t *Str2; // [rsp+90h] [rbp+58h]
  unsigned int v34; // [rsp+98h] [rbp+60h] BYREF

  Str2 = a3;
  v32 = a2;
  Str1a = Str1;
  v6 = Str1;
  v7 = a2;
  v29 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( a4 && a5 >= 2 )
  {
    v11 = a5;
    v9 = a4;
    v29 = a4;
    *a4 = 0;
  }
  while ( 1 )
  {
    FilterListInflectionPoint = CmFindFilterListInflectionPoint(v6, v7, a3);
    v30 = FilterListInflectionPoint;
    v13 = Str1a;
    if ( *Str1a )
    {
      do
      {
        if ( FilterListInflectionPoint && !wcsicmp(v13, FilterListInflectionPoint) )
          break;
        if ( wcsicmp(v13, Str2) )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( v13[v14] );
          v10 += 2 * v14 + 2;
          v15 = 2 * v14 + 2;
          if ( v9 )
          {
            v34 = v11;
            if ( PnpMultiSzAppend(v9, &v34, v13, &v29) )
            {
              v9 = v29;
            }
            else
            {
              v9 = 0LL;
              v29 = 0LL;
              v8 = -1073741789;
            }
            v11 -= v15;
          }
          FilterListInflectionPoint = v30;
        }
        v16 = -1LL;
        do
          ++v16;
        while ( v13[v16] );
        v13 += v16 + 1;
      }
      while ( *v13 );
      v7 = v32;
    }
    Str1a = (wchar_t *)v13;
    if ( *v13 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v13[v17] );
      Str1a = (wchar_t *)&v13[v17 + 1];
    }
    if ( v7 )
    {
      for ( i = v7; *i; i += v21 + 1 )
      {
        if ( FilterListInflectionPoint && !wcsicmp(i, FilterListInflectionPoint) )
          break;
        v19 = -1LL;
        do
          ++v19;
        while ( i[v19] );
        v10 += 2 * v19 + 2;
        v20 = 2 * v19 + 2;
        if ( v9 )
        {
          v34 = v11;
          if ( PnpMultiSzAppend(v9, &v34, i, &v29) )
          {
            v9 = v29;
          }
          else
          {
            v9 = 0LL;
            v29 = 0LL;
            v8 = -1073741789;
          }
          v11 -= v20;
        }
        v21 = -1LL;
        do
          ++v21;
        while ( i[v21] );
        FilterListInflectionPoint = v30;
      }
      v7 = (wchar_t *)i;
      v32 = (wchar_t *)i;
      if ( *i )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( i[v22] );
        v7 = (wchar_t *)&i[v22 + 1];
        v32 = v7;
      }
    }
    if ( !FilterListInflectionPoint )
      break;
    v23 = wcsicmp(FilterListInflectionPoint, Str2);
    a3 = Str2;
    v24 = v23 == 0;
    v6 = Str1a;
    if ( !v24 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( FilterListInflectionPoint[v25] );
      a3 = Str2;
      v10 += 2 * v25 + 2;
      v26 = 2 * v25 + 2;
      v6 = Str1a;
      if ( v9 )
      {
        v34 = v11;
        if ( PnpMultiSzAppend(v9, &v34, FilterListInflectionPoint, &v29) )
        {
          v9 = v29;
        }
        else
        {
          v9 = 0LL;
          v8 = -1073741789;
          v29 = 0LL;
        }
        v6 = Str1a;
        v11 -= v26;
        a3 = Str2;
      }
    }
  }
  if ( v10 )
  {
    v27 = v10 + 2;
    *a6 = v27;
    if ( !v9 || a5 < v27 )
      return (unsigned int)-1073741789;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v8;
}
