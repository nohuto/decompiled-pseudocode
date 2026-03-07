__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
        __int64 a1,
        __int64 a2)
{
  char *v4; // rbx
  __int64 v5; // rdx
  void **v6; // rax
  __int64 *v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  void **v10; // rdx
  unsigned __int64 v11; // rcx
  void **v12; // rax
  struct NP_CONTEXT::NP_CTX *v13; // rcx
  _QWORD *v14; // rdx
  __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  *(_OWORD *)v16 = 0LL;
  if ( (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                       a2,
                       1LL,
                       v16) )
  {
    v6 = (void **)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDescendToSibling(
                    v16,
                    v5,
                    0LL);
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      v4 = (char *)*v6;
    else
      v4 = (char *)NP_CONTEXT::NpLeafRefInternal(
                     (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)),
                     v6,
                     2 * (*(_DWORD *)(a2 + 32) & 1u));
    if ( v4 )
    {
      v7 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 2));
      v8 = v7[1];
      v9 = *v7;
      v10 = (void **)(v8 - 8);
      v11 = v9 + 16;
      v12 = (void **)(v9 + 8);
      if ( v8 <= v11 )
        v10 = v12;
      v13 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
      if ( **(_DWORD **)v13 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v13, v10);
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDescendToSibling(
        v16,
        (__int64)v10,
        a2);
      v14 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      *v14 = v4;
      v14[1] = v4 + 16;
    }
    else
    {
      return -1LL;
    }
  }
  return (__int64)v4;
}
