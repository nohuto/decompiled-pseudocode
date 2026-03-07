_BYTE *__fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSplitChild(
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
  __int64 v14; // r9
  unsigned __int64 v15; // r15
  _BYTE *v16; // rax
  struct NP_CONTEXT::NP_CTX *v17; // rcx
  _BYTE *v18; // r15
  union _NP_LEAF_PTR *v19; // rdx
  int v20; // r8d
  _BYTE *v21; // rcx
  int v22; // ecx
  int v23; // eax
  struct NP_CONTEXT::NP_CTX *v24; // rcx
  union _NP_LEAF_PTR *v25; // rdx
  __int128 v27; // [rsp+20h] [rbp-48h] BYREF
  __int16 v28; // [rsp+78h] [rbp+10h]
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
  DWORD1(v27) = 0;
  *((_QWORD *)&v27 + 1) = v7;
  v9 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v10 = (int *)(v6 + 16 + 4 * v9);
    if ( (*(_DWORD *)v6 & 1) != 0 && (unsigned __int64)(v10 + 1) < v5[1] )
    {
      ++v10;
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
  LODWORD(v27) = v11;
  v13 = (unsigned __int16)*(_DWORD *)v6 - (_DWORD)v9;
  v28 = *(_DWORD *)v6 - v9;
  if ( *(_BYTE *)(v6 + 3) )
  {
    if ( **(_DWORD **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL)) == -1 )
      *((_QWORD *)v8 + 1) = *(_QWORD *)(v6 + 8);
    memmove(v8 + 16, v10, 4LL * v13);
  }
  else
  {
    v28 = v13 - 1;
    memmove(v8 + 16, v12 + 4, 16LL * (v13 - 1));
    *((_QWORD *)v8 + 1) = *((_QWORD *)v12 + 1);
  }
  v15 = (unsigned __int64)(a1 + 2);
  *(_WORD *)v8 = v28;
  if ( *a1 == v6 )
  {
    v16 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            (__int64)a1,
            0,
            *(_BYTE *)(v6 + 2) + 1);
    v18 = v16;
    if ( v16 )
    {
      v19 = (union _NP_LEAF_PTR *)(v16 + 8);
      v20 = 1;
      *((_QWORD *)v16 + 1) = v6;
      *((_OWORD *)v16 + 1) = v27;
      *(_WORD *)v16 = 1;
      *a1 = (__int64)v16;
      if ( *(_BYTE *)(v6 + 3) && **(_DWORD **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL)) != -1 )
      {
        *(_DWORD *)v19 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v17, v19);
      }
      memmove(Src + 2, Src, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - v20));
      v21 = v18 + 16;
      *Src = v18;
      v15 = (unsigned __int64)(a1 + 2);
      Src[1] = v21;
      v22 = ++*(_DWORD *)(a2 + 24);
      goto LABEL_20;
    }
LABEL_27:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
      (__int64)a1,
      v8);
    return (_BYTE *)v3;
  }
  --*(_DWORD *)(a2 + 24);
  v23 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
          a1,
          a2,
          &v27,
          v14);
  v22 = ++*(_DWORD *)(a2 + 24);
  if ( v23 < 0 )
    goto LABEL_27;
LABEL_20:
  if ( *(_BYTE *)(v6 + 3) )
  {
    v24 = (struct NP_CONTEXT::NP_CTX *)(2LL * (unsigned int)(v22 - 2));
    v25 = (union _NP_LEAF_PTR *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v24 + 8) + 8LL);
    if ( **(_DWORD **)(v15 & -(__int64)(a1 != 0LL)) != -1 )
    {
      *(_DWORD *)v25 |= 1u;
      NP_CONTEXT::NpGetResidentLeaf(v24, v25);
    }
  }
  *(_WORD *)v6 = v9;
  if ( *(_BYTE *)(v6 + 3) && **(_DWORD **)(v15 & -(__int64)(a1 != 0LL)) == -1 )
    *(_QWORD *)(v6 + 8) = v8;
  return v8;
}
