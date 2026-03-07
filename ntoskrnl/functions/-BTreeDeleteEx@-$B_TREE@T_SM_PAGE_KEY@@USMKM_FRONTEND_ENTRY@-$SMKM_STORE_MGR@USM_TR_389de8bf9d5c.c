__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
        _QWORD *a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v4; // rdi
  _BYTE *v6; // r14
  char *v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rbp
  unsigned int v10; // esi
  __int64 v11; // rax
  size_t v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned int v15; // eax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  _DWORD *v23; // rdi
  __int128 v25; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+60h] [rbp+8h]

  v2 = 0;
  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v25 = 0LL;
  v6 = (_BYTE *)*v4;
  v7 = (char *)v4[1];
  v8 = (unsigned __int16)*(_DWORD *)*v4;
  if ( *(_BYTE *)(*v4 + 3) )
  {
    v9 = 8 * v8 + 8;
    v10 = 255;
    v11 = 8LL;
  }
  else
  {
    v10 = 127;
    v9 = 16 * v8;
    v11 = 16LL;
  }
  v26 = v10;
  v12 = (size_t)&v6[v9 - (_QWORD)v7];
  if ( v12 )
    memmove(v7, &v7[v11], v12);
  --*(_WORD *)v6;
  if ( v6[3] )
    --a1[1];
  v13 = (unsigned __int16)*(_DWORD *)v6;
  if ( (_BYTE *)*a1 == v6 )
  {
    if ( !(unsigned __int16)*(_DWORD *)v6 && !v6[3] )
    {
      memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      --*(_DWORD *)(a2 + 24);
      *a1 = *((_QWORD *)v6 + 1);
      ExFreePoolWithTag(v6, 0);
    }
    return v2;
  }
  if ( (unsigned int)v13 < v10 )
  {
    v14 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
            v13,
            a2);
    if ( !v14 )
      return (unsigned int)-1073741818;
    v15 = (unsigned __int16)*(_DWORD *)v6;
    if ( v15 < v26 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        a1,
        a2,
        v14);
      v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      if ( (v14 & 1) != 0 )
      {
        v19 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
        *v4 = v19;
        v20 = (unsigned __int16)*(_DWORD *)v19;
        if ( *(_BYTE *)(v19 + 3) )
          v21 = 8 * v20 + 16;
        else
          v21 = 16 * (v20 + 1);
        v18 = v19 + v21 - v12;
        goto LABEL_25;
      }
    }
    else if ( (v14 & 1) != 0 )
    {
      v16 = v4[1];
      v17 = v15 - v26 + 1;
      if ( v6[3] )
        v18 = v16 + 8 * v17;
      else
        v18 = v16 + 16 * v17;
LABEL_25:
      v4[1] = v18;
    }
  }
  v22 = *v4;
  v23 = (_DWORD *)v4[1];
  if ( v23 == (_DWORD *)(v22 + 16)
    && *(_BYTE *)(v22 + 3)
    && (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                       a2,
                       0LL,
                       &v25) )
  {
    **((_DWORD **)&v25 + 1) = *v23;
  }
  return v2;
}
