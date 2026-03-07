__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
        __int64 a1,
        __int64 a2,
        char a3)
{
  char *v6; // rbx
  void **v7; // rax
  __int64 *v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  void **v11; // rdx
  unsigned __int64 v12; // rcx
  void **v13; // rax
  struct NP_CONTEXT::NP_CTX *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v17[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v17 = 0LL;
  v6 = 0LL;
  if ( (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                       a2,
                       a3 & 1,
                       v17) )
  {
    v7 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
                    v17,
                    a3,
                    0LL);
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      v6 = (char *)*v7;
    else
      v6 = (char *)NP_CONTEXT::NpLeafRefInternal(
                     (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)),
                     v7,
                     2 * (*(_DWORD *)(a2 + 32) & 1u));
    if ( v6 )
    {
      if ( (a3 & 2) != 0 )
      {
        v8 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 2));
        v9 = v8[1];
        v10 = *v8;
        v11 = (void **)(v9 - 8);
        v12 = v10 + 16;
        v13 = (void **)(v10 + 8);
        if ( v9 <= v12 )
          v11 = v13;
        v14 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
        if ( **(_DWORD **)v14 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v14, v11);
      }
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
        v17,
        a3,
        a2);
      v15 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      *v15 = v6;
      v15[1] = v6 + 16;
    }
    else
    {
      return -1LL;
    }
  }
  return (__int64)v6;
}
