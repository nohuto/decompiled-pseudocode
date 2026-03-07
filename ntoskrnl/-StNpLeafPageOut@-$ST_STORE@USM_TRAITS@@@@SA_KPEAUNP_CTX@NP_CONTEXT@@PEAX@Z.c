__int64 __fastcall ST_STORE<SM_TRAITS>::StNpLeafPageOut(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rdi
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+34h] [rbp-24h]
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD **)a1;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
  if ( (*(_DWORD *)(v4 + 56) & 1) == 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      *(__int64 **)(*(_QWORD *)a1 + 128LL),
      v4 + 24);
  *(_DWORD *)(v4 + 56) |= 1u;
  do
  {
    v5 = v2[13];
    if ( v5 == v2[15] )
      v6 = v2[14];
    else
      v6 = v5 + 1;
    v2[13] = v6;
  }
  while ( (unsigned int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
                          (char **)v4,
                          4 * (int)v5,
                          v4 + 24) != -1073741275 );
  v7 = *(_DWORD *)(v4 + 820);
  v8 = 0LL;
  v10[1] = a2;
  v10[0] = 0LL;
  v12 = 0;
  v11 = 4 * v5;
  v13 = v7;
  if ( (int)ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(v4, (__int64)v10, 0LL, &v13) >= 0 )
    return 4 * v5;
  return v8;
}
