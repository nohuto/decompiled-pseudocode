/*
 * XREFs of _CmGetDeclarativeFilterList @ 0x140979DA4
 * Callers:
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14097A1BC (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14097AAD0 (_CmGetInstallerClassCompoundFiltersWorker.c)
 * Callees:
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     _CmAppendDeclarativeDefaultFilters @ 0x140979638 (_CmAppendDeclarativeDefaultFilters.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140979720 (_CmAppendDeclarativeFilterLevel.c)
 */

__int64 __fastcall CmGetDeclarativeFilterList(
        __int64 a1,
        __int64 a2,
        wchar_t *Str1,
        wchar_t *Str2,
        __int64 a5,
        wchar_t *a6,
        unsigned int a7,
        _DWORD *a8)
{
  const wchar_t *v9; // rsi
  int v11; // ebx
  wchar_t *pszDest; // rdi
  unsigned int v13; // r14d
  int v14; // ebp
  int appended; // eax
  __int64 v16; // r9
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  unsigned int v21[4]; // [rsp+40h] [rbp-38h] BYREF
  wchar_t *v22; // [rsp+98h] [rbp+20h]

  v22 = Str2;
  v9 = Str1;
  v21[0] = 0;
  v11 = 0;
  pszDest = 0LL;
  v13 = 0;
  v14 = 0;
  if ( a6 )
  {
    if ( a7 < 2 )
      return (unsigned int)-1073741811;
    v14 = a7;
    pszDest = a6;
    *a6 = 0;
  }
  if ( !Str1 )
  {
    appended = CmAppendDeclarativeDefaultFilters(a1, a2, a5, (__int64)Str2, pszDest, v14, v21);
    v13 = v21[0];
    v11 = appended;
    goto LABEL_26;
  }
  if ( *Str1 )
  {
    while ( 1 )
    {
      if ( !wcsicmp(v9, Str2) )
      {
        v17 = CmAppendDeclarativeDefaultFilters(a1, a2, a5, v16, pszDest, v14, v21);
        if ( v17 == -1073741789 )
        {
          v11 = -1073741789;
          pszDest = 0LL;
        }
        else if ( v17 < 0 )
        {
          v11 = v17;
          break;
        }
        v13 += v21[0];
        if ( pszDest )
        {
          v14 -= v21[0];
          pszDest += (unsigned __int64)v21[0] >> 1;
        }
      }
      v18 = CmAppendDeclarativeFilterLevel(a1, a2, (__int64)v9, pszDest, v14, v21);
      if ( v18 == -1073741789 )
      {
        v11 = -1073741789;
        pszDest = 0LL;
      }
      else if ( (int)(v18 + 0x80000000) >= 0 && v18 != -1073741772 )
      {
        v11 = v18;
        break;
      }
      v13 += v21[0];
      if ( pszDest )
      {
        v14 -= v21[0];
        pszDest += (unsigned __int64)v21[0] >> 1;
      }
      v19 = -1LL;
      do
        ++v19;
      while ( v9[v19] );
      v9 += v19 + 1;
      if ( !*v9 )
        break;
      Str2 = v22;
    }
  }
LABEL_26:
  *a8 = v13 + 2;
  if ( v11 >= 0 && v13 + 2 > a7 )
    return (unsigned int)-1073741789;
  return (unsigned int)v11;
}
