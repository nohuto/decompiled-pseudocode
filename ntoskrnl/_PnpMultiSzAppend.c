/*
 * XREFs of _PnpMultiSzAppend @ 0x140839FAC
 * Callers:
 *     _CmGetDeviceChildren @ 0x140839DE0 (_CmGetDeviceChildren.c)
 *     _CmAppendDeclarativeDefaultFilters @ 0x140A642C4 (_CmAppendDeclarativeDefaultFilters.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140A643AC (_CmAppendDeclarativeFilterLevel.c)
 *     _CmMergeFilterLists @ 0x140A667FC (_CmMergeFilterLists.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x1402E1820 (RtlStringCbCopyExW.c)
 */

char __fastcall PnpMultiSzAppend(NTSTRSAFE_PWSTR pszDest, unsigned int *a2, const wchar_t *a3, wchar_t **a4)
{
  unsigned __int64 v4; // r10
  NTSTRSAFE_PWSTR v9; // rdi
  __int64 v10; // rbx
  size_t v11; // rdx
  __int64 v12; // rcx
  wchar_t *v13; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // edi
  wchar_t *v18; // rax

  v4 = *a2;
  if ( *pszDest )
  {
    v9 = pszDest;
    if ( (_DWORD)v4 )
    {
      do
      {
        do
          ++v9;
        while ( *v9 );
        ++v9;
      }
      while ( *v9 && 2 * (unsigned __int64)(unsigned int)(v9 - pszDest) < v4 );
    }
    v10 = -1LL;
    v11 = *a2;
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    if ( 2 * (v9 - pszDest + v12) + 4 <= v4 && RtlStringCbCopyExW(v9, v11, a3, 0LL, 0LL, 0x900u) >= 0 )
    {
      do
        ++v10;
      while ( a3[v10] );
      v13 = &v9[v10 + 1];
      *v13 = 0;
      *a2 = 2 * (v13 - pszDest) + 2;
      if ( a4 )
        *a4 = v13;
      return 1;
    }
  }
  else
  {
    v15 = -1LL;
    v16 = -1LL;
    do
      ++v16;
    while ( a3[v16] );
    v17 = 2 * v16 + 4;
    if ( v17 <= (unsigned int)v4 && RtlStringCbCopyExW(pszDest, *a2, a3, 0LL, 0LL, 0x900u) >= 0 )
    {
      do
        ++v15;
      while ( pszDest[v15] );
      *a2 = v17;
      v18 = &pszDest[v15 + 1];
      *v18 = 0;
      if ( a4 )
        *a4 = v18;
      return 1;
    }
  }
  return 0;
}
