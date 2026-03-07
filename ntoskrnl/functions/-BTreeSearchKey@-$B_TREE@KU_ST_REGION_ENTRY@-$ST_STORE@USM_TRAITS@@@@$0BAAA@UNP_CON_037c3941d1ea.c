__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // ebp
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  char *v11; // rsi
  unsigned int Key; // eax
  void **v13; // rcx
  char *v14; // r8
  int v15; // eax
  int v17; // [rsp+60h] [rbp+18h] BYREF
  int v18; // [rsp+68h] [rbp+20h] BYREF

  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    (__int64 *)a1,
    a3);
  v7 = 0;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v8 = 0;
    v9 = (_QWORD *)(a3 + 8);
  }
  else
  {
    v8 = 1;
    v10 = 0LL;
    if ( *(_QWORD *)a1 )
      v10 = *(unsigned __int8 *)(*(_QWORD *)a1 + 2LL);
    if ( *(_DWORD *)(a3 + 28) < (unsigned int)v10 && !(unsigned int)SmArrayGrow(v10, v6, a3 + 28, a3) )
      return (unsigned int)-1073741670;
    v9 = *(_QWORD **)a3;
  }
  v11 = *(char **)a1;
  if ( !*(_QWORD *)a1 )
  {
    if ( !v8 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    Key = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFindKey(
            a1,
            (__int64)v11,
            a2);
    if ( v11[3] )
      break;
    if ( v8 )
    {
      *v9 = v11;
      v9[1] = &v11[16 * Key + 16];
      v9 += 2;
    }
    if ( Key )
      v13 = (void **)&v11[16 * Key + 8];
    else
      v13 = (void **)(v11 + 8);
    if ( **(_DWORD **)(a1 + 16) == -1 || v11[2] != 2 )
    {
      v11 = (char *)*v13;
    }
    else
    {
      v11 = (char *)NP_CONTEXT::NpLeafRefInternal(
                      (struct NP_CONTEXT::NP_CTX *)(a1 + 16),
                      v13,
                      2 * (*(_BYTE *)(a3 + 32) & 1u));
      if ( !v11 )
        return (unsigned int)-1073741818;
    }
  }
  *v9 = v11;
  v14 = &v11[4 * Key + 16];
  v9[1] = v14;
  if ( v8 )
    *(_DWORD *)(a3 + 24) = (((__int64)v9 - *(_QWORD *)a3) >> 4) + 1;
  if ( Key >= (unsigned __int16)*(_DWORD *)v11 )
    return (unsigned int)-1073741275;
  v15 = *(_DWORD *)v14;
  v17 = a2;
  v18 = v15;
  if ( (unsigned int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v18, &v17) )
    return (unsigned int)-1073741275;
  return v7;
}
