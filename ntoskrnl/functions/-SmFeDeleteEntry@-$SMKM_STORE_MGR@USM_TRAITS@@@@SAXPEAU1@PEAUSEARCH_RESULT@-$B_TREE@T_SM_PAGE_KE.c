__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // rbp
  int v5; // edx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int128 v10; // xmm0
  int v11; // eax

  v4 = (__int64 *)(a1 + 448);
  v5 = *(_DWORD *)(a2 + 24);
  v7 = a2 + 8;
  v8 = (_QWORD *)(a2 + 8);
  if ( v5 != -1 && v5 )
    v7 = *(_QWORD *)a2 + 16LL * (unsigned int)(v5 - 1);
  v9 = *a3;
  if ( *(_QWORD *)v7 == *a3 )
  {
    *(_QWORD *)(v7 + 8) = a3[1];
  }
  else if ( v5 == -1 )
  {
    v10 = *(_OWORD *)a3;
    *v8 = 0LL;
    *(_OWORD *)v7 = v10;
  }
  else
  {
    *(_DWORD *)(a2 + 24) = 0;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      v4,
      *(_DWORD *)(v9 + 16),
      a2);
    v11 = *(_DWORD *)(a2 + 24);
    if ( v11 != -1 && v11 )
      v8 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v11 - 1));
    v8[1] = a3[1];
  }
  return B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
           v4,
           a2);
}
