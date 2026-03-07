__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  _QWORD *v6; // rbx
  void **v8; // rdx
  int v9; // r8d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  _DWORD *v13; // rax
  size_t v14; // r8
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax

  v6 = (_QWORD *)a3;
  v8 = (void **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v9 = a3 & 1;
  if ( v9 )
    v6 = *v8;
  v10 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  v11 = v10;
  if ( !v9 )
  {
    v11 = (unsigned __int64)*v8;
    v10 = a3;
  }
  v12 = (unsigned __int16)*(_DWORD *)v11;
  v13 = *(v8 - 1);
  if ( v11 == v10 )
  {
    v13 -= 4;
    *(v8 - 1) = v13;
  }
  if ( *(_BYTE *)(v11 + 3) )
  {
    *(_QWORD *)(v11 + 8) = v6[1];
    v14 = 8LL * (unsigned __int16)*(_DWORD *)v6;
    v15 = (void *)(v11 + 8 * (v12 + 2));
  }
  else
  {
    v16 = 2 * v12;
    LODWORD(v12) = v12 + 1;
    *(_DWORD *)(v11 + 8 * v16 + 16) = *v13;
    *(_QWORD *)(v11 + 8 * v16 + 24) = v6[1];
    v14 = 16LL * (unsigned __int16)*(_DWORD *)v6;
    v15 = (void *)(v11 + 16 * ((unsigned int)v12 + 1LL));
  }
  memmove(v15, v6 + 2, v14);
  *(_WORD *)v11 = *(_WORD *)v6 + v12;
  ExFreePoolWithTag(v6, 0);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
