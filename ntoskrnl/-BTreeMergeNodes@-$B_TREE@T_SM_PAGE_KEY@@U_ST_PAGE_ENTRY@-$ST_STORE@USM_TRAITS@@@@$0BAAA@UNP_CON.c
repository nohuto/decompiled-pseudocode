__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 *v6; // r9
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rbp
  void *v12; // rcx
  size_t v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r12
  struct NP_CONTEXT::NP_CTX *v16; // rcx
  struct NP_CONTEXT::NP_CTX *v17; // rcx
  __int64 result; // rax

  v5 = a3;
  v6 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v7 = *(v6 - 1);
  if ( (a3 & 1) != 0 )
    v5 = *v6;
  v8 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a3 & 1) == 0 )
  {
    v9 = *v6;
    v8 = a3;
  }
  v10 = *(_DWORD *)v9;
  v11 = (unsigned __int16)*(_DWORD *)v9;
  if ( v9 == v8 )
  {
    v7 -= 16LL;
    *(v6 - 1) = v7;
  }
  if ( *(_BYTE *)(v9 + 3) )
  {
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(v5 + 8);
    v12 = (void *)(v9 + 16 + 8 * v11);
    v13 = 8LL * (unsigned __int16)*(_DWORD *)v5;
  }
  else
  {
    v14 = 2LL * (unsigned __int16)v10;
    LODWORD(v11) = (unsigned __int16)v10 + 1;
    *(_DWORD *)(v9 + 8 * v14 + 16) = *(_DWORD *)v7;
    *(_QWORD *)(v9 + 8 * v14 + 24) = *(_QWORD *)(v5 + 8);
    v13 = 16LL * (unsigned __int16)*(_DWORD *)v5;
    v12 = (void *)(v9 + 16 * ((unsigned int)v11 + 1LL));
  }
  memmove(v12, (const void *)(v5 + 16), v13);
  v15 = a1 + 16;
  *(_WORD *)v9 = *(_WORD *)v5 + v11;
  if ( *(_BYTE *)(v9 + 3) )
  {
    v16 = (struct NP_CONTEXT::NP_CTX *)(v15 & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v16 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(v16, (void **)(v7 + 8));
    v17 = (struct NP_CONTEXT::NP_CTX *)(v15 & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v17 != -1 )
      NP_CONTEXT::NpLeafRemoveInternal(v17, (void **)(v7 + 8));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
    a1,
    (unsigned __int8 *)v5);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
