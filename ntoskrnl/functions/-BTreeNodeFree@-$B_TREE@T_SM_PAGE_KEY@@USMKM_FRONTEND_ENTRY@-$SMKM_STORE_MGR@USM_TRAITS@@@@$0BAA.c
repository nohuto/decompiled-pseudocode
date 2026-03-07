void __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFree(
        __int64 a1,
        char *a2)
{
  char *v4; // r14
  char *v5; // rdi
  unsigned __int64 v6; // rsi
  _QWORD *v7; // r12
  _QWORD *v8; // rbp
  _QWORD *v9; // rax

  if ( !a2[3] )
  {
    v4 = a2 + 16;
    v5 = a2 + 16;
    v6 = (unsigned __int64)&a2[16 * (unsigned __int16)*(_DWORD *)a2 + 16];
    if ( (unsigned __int64)(a2 + 16) <= v6 )
    {
      v7 = a2 + 8;
      v8 = a2 + 8;
      do
      {
        v9 = v8;
        if ( v5 <= v4 )
          v9 = v7;
        if ( *v9 )
          B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFree(a1);
        v5 += 16;
        v8 += 2;
      }
      while ( (unsigned __int64)v5 <= v6 );
    }
  }
  ExFreePoolWithTag(a2, 0);
}
