__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v4; // rdi
  _DWORD *v6; // rsi
  char *v7; // rcx
  int v8; // eax
  __int64 v9; // rbp
  unsigned int v10; // r14d
  const void *v11; // rdx
  size_t v12; // rbp
  _DWORD **v13; // rdi
  __int64 v14; // r14
  unsigned int v15; // eax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  void **v21; // rdx
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  _DWORD *v25; // rcx
  _DWORD *v26; // rdi
  __int128 v28; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+60h] [rbp+8h]

  v2 = 0;
  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v28 = 0LL;
  v6 = (_DWORD *)*v4;
  v7 = (char *)v4[1];
  v8 = *(_DWORD *)*v4;
  if ( *(_BYTE *)(*v4 + 3) )
  {
    v9 = 8LL * (unsigned __int16)v8 + 8;
    v10 = 255;
    v11 = v7 + 8;
  }
  else
  {
    v9 = 16LL * (unsigned __int16)v8;
    v11 = v7 + 16;
    v10 = 127;
  }
  v29 = v10;
  v12 = (size_t)v6 + v9 - (_QWORD)v7;
  if ( v12 )
    memmove(v7, v11, v12);
  --*(_WORD *)v6;
  if ( *((_BYTE *)v6 + 3) )
    --*(_QWORD *)(a1 + 8);
  if ( *(_DWORD **)a1 == v6 )
  {
    if ( !(unsigned __int16)*v6 && !*((_BYTE *)v6 + 3) )
    {
      memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      v13 = (_DWORD **)(a1 + 16);
      --*(_DWORD *)(a2 + 24);
      if ( **(_DWORD **)(a1 + 16) == -1 || *((_BYTE *)v6 + 2) != 2 )
      {
        *(_QWORD *)a1 = *((_QWORD *)v6 + 1);
      }
      else
      {
        *(_QWORD *)a1 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v6 + 1, 1u);
        if ( **v13 != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v6 + 1);
        if ( **v13 != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v6 + 1);
        if ( **v13 != -1 )
          NP_CONTEXT::NpLeafRemoveInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v6 + 1);
      }
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
        a1,
        v6);
    }
  }
  else
  {
    if ( (unsigned __int16)*v6 < v10 )
    {
      v14 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              a1,
              a2);
      if ( !v14 )
        return (unsigned int)-1073741818;
      v15 = (unsigned __int16)*v6;
      if ( v15 < v29 )
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
          a1,
          a2,
          v14);
        v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v14 & 1) != 0 )
        {
          v22 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
          *v4 = v22;
          v23 = (unsigned __int16)*(_DWORD *)v22;
          if ( *(_BYTE *)(v22 + 3) )
            v24 = 8 * v23 + 16;
          else
            v24 = 16 * (v23 + 1);
          v4[1] = v22 + v24 - v12;
        }
      }
      else
      {
        if ( (v14 & 1) != 0 )
        {
          v16 = v4[1];
          v17 = v15 - v29 + 1;
          if ( *((_BYTE *)v6 + 3) )
            v18 = v16 + 8 * v17;
          else
            v18 = v16 + 16 * v17;
          v4[1] = v18;
        }
        if ( *((_BYTE *)v6 + 3) )
        {
          v19 = *(v4 - 2);
          v20 = 32LL * !(v14 & 1) + *(v4 - 1) - 16;
          v21 = (void **)(v20 <= v19 + 16 ? v19 + 8 : v20 - 8);
          if ( **(_DWORD **)(a1 + 16) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v21);
        }
      }
    }
    v25 = (_DWORD *)*v4;
    v26 = (_DWORD *)v4[1];
    if ( v26 == v25 + 4
      && *((_BYTE *)v25 + 3)
      && (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                         a2,
                         0LL,
                         &v28) )
    {
      **((_DWORD **)&v28 + 1) = *v26;
    }
  }
  return v2;
}
