/*
 * XREFs of _CmGetDeclarativeFilterList @ 0x140A64F80
 * Callers:
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A6517C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A65A54 (_CmGetInstallerClassCompoundFiltersWorker.c)
 * Callees:
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     _CmAppendDeclarativeDefaultFilters @ 0x140A642C4 (_CmAppendDeclarativeDefaultFilters.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140A643AC (_CmAppendDeclarativeFilterLevel.c)
 */

__int64 __fastcall CmGetDeclarativeFilterList(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t *a4,
        const wchar_t *a5,
        wchar_t *a6,
        unsigned int a7,
        unsigned int *a8)
{
  const wchar_t *v8; // rbp
  int v9; // ebx
  wchar_t *pszDest; // rdi
  unsigned int v11; // esi
  unsigned int v12; // r14d
  int appended; // eax
  int v14; // r12d
  __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // esi
  unsigned int v21[18]; // [rsp+40h] [rbp-48h] BYREF
  const wchar_t *v24; // [rsp+A8h] [rbp+20h]

  v24 = a4;
  v8 = a3;
  v21[0] = 0;
  v9 = 0;
  pszDest = 0LL;
  v11 = 0;
  v12 = 0;
  if ( a6 )
  {
    if ( a7 < 2 )
      return (unsigned int)-1073741811;
    v12 = a7;
    pszDest = a6;
    *a6 = 0;
  }
  if ( !a3 )
  {
    appended = CmAppendDeclarativeDefaultFilters(a1, a2, a5, (__int64)a4, pszDest, v12, v21);
    v11 = v21[0];
    v9 = appended;
    goto LABEL_25;
  }
  if ( *a3 )
  {
    while ( 1 )
    {
      v14 = v9;
      if ( !wcsicmp(v8, a4) )
      {
        v16 = CmAppendDeclarativeDefaultFilters(a1, a2, a5, v15, pszDest, v12, v21);
        v9 = v16;
        if ( v16 == -1073741789 )
        {
          v9 = -1073741789;
          v11 += v21[0];
          pszDest = 0LL;
        }
        else
        {
          if ( v16 < 0 )
            break;
          v9 = v14;
          v11 += v21[0];
          if ( pszDest )
          {
            v12 -= v21[0];
            pszDest += (unsigned __int64)v21[0] >> 1;
          }
        }
      }
      v17 = CmAppendDeclarativeFilterLevel(a1, a2, (__int64)v8, pszDest, v12, v21);
      if ( v17 == -1073741789 )
      {
        v11 += v21[0];
        v9 = -1073741789;
        pszDest = 0LL;
      }
      else
      {
        if ( (int)(v17 + 0x80000000) >= 0 && v17 != -1073741772 )
        {
          v9 = v17;
          break;
        }
        v11 += v21[0];
        if ( pszDest )
        {
          v12 -= v21[0];
          pszDest += (unsigned __int64)v21[0] >> 1;
        }
      }
      v18 = -1LL;
      do
        ++v18;
      while ( v8[v18] );
      v8 += v18 + 1;
      if ( !*v8 )
        break;
      a4 = v24;
    }
  }
LABEL_25:
  v19 = v11 + 2;
  *a8 = v19;
  if ( v9 >= 0 && v19 > a7 )
    return (unsigned int)-1073741789;
  return (unsigned int)v9;
}
