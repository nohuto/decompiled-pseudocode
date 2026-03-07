__int64 __fastcall CmpKeyEnumStackEntryAdvance(_QWORD *a1)
{
  __int64 v1; // r8
  int v3; // edx
  __int64 v4; // rcx
  __int64 *v5; // rsi
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int *v10; // rbp
  int v11; // r8d
  unsigned int v12; // r8d
  unsigned int SubKeyByNumber; // eax
  ULONG_PTR v14; // rcx
  unsigned int *v15; // rdi
  __int64 v16; // rdx

  v1 = a1[15];
  v3 = 0;
  v4 = 0LL;
  v5 = a1 + 10;
  result = (__int64)(a1 + 10);
  v7 = 2LL;
  while ( *(_QWORD *)result != v1 )
  {
    ++v3;
    ++v4;
    result += 8LL;
    if ( v4 >= 2 )
      goto LABEL_13;
  }
  v8 = *a1;
  v9 = v3;
  v10 = (unsigned int *)&a1[v3 + 12];
  if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
    result = HvpReleaseCellFlat(v8, v10);
  else
    result = HvpReleaseCellPaged(v8, v10);
  a1[v9 + 10] = 0LL;
  v11 = *((_DWORD *)a1 + v9 + 6);
  *((_DWORD *)a1 + v9 + 18) = -1;
  v12 = v11 + 1;
  *((_DWORD *)a1 + v9 + 6) = v12;
  if ( v12 < *((_DWORD *)a1 + v9 + 8) )
  {
    SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1, (_WORD *)a1[v9 + 5], v12);
    *((_DWORD *)a1 + v9 + 18) = SubKeyByNumber;
    v14 = *a1;
    if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
      result = HvpGetCellFlat(v14, SubKeyByNumber, v10);
    else
      result = HvpGetCellPaged(v14, SubKeyByNumber, v10);
    a1[v9 + 10] = result;
  }
LABEL_13:
  a1[15] = 0LL;
  v15 = (unsigned int *)(a1 + 9);
  *((_DWORD *)a1 + 28) = -1;
  do
  {
    if ( *v5 )
    {
      v16 = a1[15];
      if ( !v16 || (result = CmpCompareKeysByName(*v5, v16), (int)result < 0) )
      {
        a1[15] = *v5;
        result = *v15;
        *((_DWORD *)a1 + 28) = result;
      }
    }
    ++v5;
    ++v15;
    --v7;
  }
  while ( v7 );
  return result;
}
