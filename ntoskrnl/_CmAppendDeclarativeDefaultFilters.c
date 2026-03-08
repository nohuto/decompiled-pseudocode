/*
 * XREFs of _CmAppendDeclarativeDefaultFilters @ 0x140A642C4
 * Callers:
 *     _CmGetDeclarativeFilterList @ 0x140A64F80 (_CmGetDeclarativeFilterList.c)
 * Callees:
 *     _PnpMultiSzAppend @ 0x140839FAC (_PnpMultiSzAppend.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140A643AC (_CmAppendDeclarativeFilterLevel.c)
 */

__int64 __fastcall CmAppendDeclarativeDefaultFilters(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        NTSTRSAFE_PWSTR pszDest,
        int a6,
        _DWORD *a7)
{
  NTSTRSAFE_PWSTR v7; // r10
  unsigned int v8; // ebx
  int v9; // edi
  __int64 v13; // rax
  int v14; // esi
  char v15; // al
  unsigned int appended; // eax
  unsigned int v17; // edx
  int v19; // [rsp+68h] [rbp+20h] BYREF

  v7 = pszDest;
  v8 = 0;
  v9 = a6;
  v19 = 0;
  v13 = -1LL;
  do
    ++v13;
  while ( a3[v13] );
  v14 = 2 * v13 + 2;
  if ( pszDest )
  {
    v19 = a6;
    v15 = PnpMultiSzAppend(pszDest, (unsigned int *)&v19, a3, &pszDest);
    v7 = (NTSTRSAFE_PWSTR)((unsigned __int64)pszDest & -(__int64)(v15 != 0));
    v9 -= v14;
  }
  appended = CmAppendDeclarativeFilterLevel(a1, a2, a3, v7, v9, &v19);
  v17 = appended;
  if ( appended == -1073741772 )
  {
    v17 = 0;
LABEL_10:
    *a7 = v8 + v14;
    return v17;
  }
  if ( (int)(appended + 0x80000000) < 0 || appended == -1073741789 )
  {
    v8 = v19;
    goto LABEL_10;
  }
  return v17;
}
