__int64 __fastcall PiDmCompareObjects(struct _RTL_AVL_TABLE *Table, __int64 *FirstStruct, __int64 *SecondStruct)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned int v5; // ecx
  const wchar_t *v7; // rdx
  const wchar_t *v8; // rcx
  int v9; // ecx

  v3 = *FirstStruct;
  v4 = *SecondStruct;
  if ( v3 == *SecondStruct )
    return 2LL;
  v5 = *(_DWORD *)(v3 + 24);
  if ( v5 < *(_DWORD *)(v4 + 24) )
    return 0LL;
  if ( v5 > *(_DWORD *)(v4 + 24) )
    return 1LL;
  v7 = *(const wchar_t **)(v4 + 16);
  v8 = *(const wchar_t **)(v3 + 16);
  if ( *(_DWORD *)(v3 + 28) == 3 )
  {
    v8 += 4;
    v7 += 4;
  }
  v9 = wcsicmp(v8, v7);
  if ( v9 < 0 )
    return 0LL;
  else
    return (unsigned int)(v9 <= 0) + 1;
}
