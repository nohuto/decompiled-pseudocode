_BYTE *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v5; // r15
  __int64 v6; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // r14
  __int64 v9; // rbp
  int *v10; // r9
  int v11; // eax
  int *v12; // r15
  unsigned int v13; // edx
  unsigned __int64 v14; // r15
  _BYTE *v15; // rax
  struct NP_CONTEXT::NP_CTX *v16; // rcx
  _BYTE *v17; // r15
  union _NP_LEAF_PTR *v18; // rdx
  int v19; // r8d
  _BYTE *v20; // rcx
  int v21; // ecx
  int v22; // eax
  struct NP_CONTEXT::NP_CTX *v23; // rcx
  union _NP_LEAF_PTR *v24; // rdx
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF
  __int16 v27; // [rsp+78h] [rbp+10h]
  _QWORD *Src; // [rsp+80h] [rbp+18h]

  v3 = 0LL;
  v5 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  Src = v5;
  v6 = *v5;
  v7 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         (__int64)a1,
         *(unsigned __int8 *)(*v5 + 3LL),
         *(_BYTE *)(*v5 + 2LL));
  v8 = v7;
  if ( !v7 )
    return (_BYTE *)v3;
  DWORD1(v26) = 0;
  *((_QWORD *)&v26 + 1) = v7;
  v9 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v10 = (int *)(v6 + 16 + 8 * v9);
    if ( (*(_DWORD *)v6 & 1) != 0 && (unsigned __int64)(v10 + 2) < v5[1] )
    {
      v10 += 2;
      LODWORD(v9) = v9 + 1;
    }
    v11 = *v10;
    v12 = 0LL;
  }
  else
  {
    v10 = 0LL;
    v12 = (int *)(v6 + 16 * (v9 + 1));
    v11 = *v12;
  }
  LODWORD(v26) = v11;
  v13 = (unsigned __int16)*(_DWORD *)v6 - (_DWORD)v9;
  v27 = *(_DWORD *)v6 - v9;
  if ( *(_BYTE *)(v6 + 3) )
  {
    if ( **(_DWORD **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL)) == -1 )
      *((_QWORD *)v8 + 1) = *(_QWORD *)(v6 + 8);
    memmove(v8 + 16, v10, 8LL * v13);
  }
  else
  {
    v27 = v13 - 1;
    memmove(v8 + 16, v12 + 4, 16LL * (v13 - 1));
    *((_QWORD *)v8 + 1) = *((_QWORD *)v12 + 1);
  }
  v14 = (unsigned __int64)(a1 + 2);
  *(_WORD *)v8 = v27;
  if ( *a1 == v6 )
  {
    v15 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            (__int64)a1,
            0,
            *(_BYTE *)(v6 + 2) + 1);
    v17 = v15;
    if ( v15 )
    {
      v18 = (union _NP_LEAF_PTR *)(v15 + 8);
      v19 = 1;
      *((_QWORD *)v15 + 1) = v6;
      *((_OWORD *)v15 + 1) = v26;
      *(_WORD *)v15 = 1;
      *a1 = (__int64)v15;
      if ( *(_BYTE *)(v6 + 3) && **(_DWORD **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL)) != -1 )
      {
        *(_DWORD *)v18 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v16, v18);
      }
      memmove(Src + 2, Src, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - v19));
      v20 = v17 + 16;
      *Src = v17;
      v14 = (unsigned __int64)(a1 + 2);
      Src[1] = v20;
      v21 = ++*(_DWORD *)(a2 + 24);
      goto LABEL_20;
    }
LABEL_27:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
      (__int64)a1,
      v8);
    return (_BYTE *)v3;
  }
  --*(_DWORD *)(a2 + 24);
  v22 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
          a1,
          a2,
          &v26);
  v21 = ++*(_DWORD *)(a2 + 24);
  if ( v22 < 0 )
    goto LABEL_27;
LABEL_20:
  if ( *(_BYTE *)(v6 + 3) )
  {
    v23 = (struct NP_CONTEXT::NP_CTX *)(2LL * (unsigned int)(v21 - 2));
    v24 = (union _NP_LEAF_PTR *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v23 + 8) + 8LL);
    if ( **(_DWORD **)(v14 & -(__int64)(a1 != 0LL)) != -1 )
    {
      *(_DWORD *)v24 |= 1u;
      NP_CONTEXT::NpGetResidentLeaf(v23, v24);
    }
  }
  *(_WORD *)v6 = v9;
  if ( *(_BYTE *)(v6 + 3) && **(_DWORD **)(v14 & -(__int64)(a1 != 0LL)) == -1 )
    *(_QWORD *)(v6 + 8) = v8;
  return v8;
}
