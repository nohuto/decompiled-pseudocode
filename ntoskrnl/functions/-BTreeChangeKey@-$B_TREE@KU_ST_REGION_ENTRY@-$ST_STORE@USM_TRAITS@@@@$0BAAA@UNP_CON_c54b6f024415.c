__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v3; // r9d
  __int64 *v7; // r9
  int *v8; // r12
  __int64 v9; // r15
  int v10; // esi
  __int64 v11; // rdx
  _DWORD *v12; // r14
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rdx
  unsigned int v16; // r8d
  void **v17; // r13
  struct NP_CONTEXT::NP_CTX *v18; // rcx
  int *v19; // rdx
  int v21; // r15d
  int v22; // eax
  int v23; // esi
  struct NP_CONTEXT::NP_CTX *v24; // rcx
  __int128 v25; // [rsp+20h] [rbp-10h] BYREF
  int v26; // [rsp+78h] [rbp+48h] BYREF
  int v27; // [rsp+80h] [rbp+50h] BYREF
  __int64 v28; // [rsp+88h] [rbp+58h]

  v3 = *(_DWORD *)(a2 + 24);
  v26 = a3;
  v7 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v3 - 1));
  v25 = 0LL;
  v8 = (int *)v7[1];
  v9 = *v7;
  v27 = *v8;
  v10 = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v26, &v27);
  if ( v10 <= 0 )
  {
    if ( (unsigned __int64)v8 > v9 + 16 )
    {
      if ( v10 )
      {
        v26 = *(v8 - 1);
        v27 = a3;
LABEL_8:
        if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v26, &v27) < 0 )
          goto LABEL_37;
        return 0LL;
      }
      goto LABEL_37;
    }
    v11 = 0LL;
  }
  else
  {
    if ( (unsigned __int64)v8 < v9 + 4 * ((unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v9 - 1) + 4) )
    {
      v27 = v8[1];
      v26 = a3;
      goto LABEL_8;
    }
    v11 = 1LL;
  }
  if ( (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                       a2,
                       v11,
                       &v25) )
  {
    v12 = (_DWORD *)*((_QWORD *)&v25 + 1);
    if ( v10 <= 0 )
    {
      if ( v10 )
      {
        v28 = a1 + 16;
        v15 = 0LL;
        goto LABEL_22;
      }
      **((_DWORD **)&v25 + 1) = a3;
    }
    else
    {
      v27 = **((_DWORD **)&v25 + 1);
      v26 = a3;
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v26, &v27) >= 0 )
      {
        v28 = a1 + 16;
        if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) != -1 )
        {
          v15 = 1LL;
LABEL_22:
          v17 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
                           &v25,
                           v15,
                           0LL);
          v18 = (struct NP_CONTEXT::NP_CTX *)(v28 & -(__int64)(a1 != 0));
          if ( **(_DWORD **)v18 == -1 )
            v19 = (int *)*v17;
          else
            v19 = (int *)NP_CONTEXT::NpLeafRefInternal(v18, v17, v16);
          if ( !v19 )
            return 0xFFFFFFFFLL;
          v21 = 0;
          if ( v10 >= 0 )
          {
            v23 = v19[4];
            v27 = v23;
            v26 = a3;
            if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v26, &v27) >= 0 )
              goto LABEL_33;
            *v12 = v23;
          }
          else
          {
            v22 = *v19;
            v27 = a3;
            v26 = v19[(unsigned __int16)v22 + 3];
            if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v26, &v27) >= 0 )
              goto LABEL_33;
            *v12 = a3;
          }
          v21 = 1;
LABEL_33:
          v24 = (struct NP_CONTEXT::NP_CTX *)(v28 & -(__int64)(a1 != 0));
          if ( **(_DWORD **)v24 != -1 )
            NP_CONTEXT::NpLeafDerefInternal(v24, v17);
          if ( v21 )
            goto LABEL_37;
          return 0LL;
        }
        v13 = *(_QWORD *)(v9 + 8);
        v26 = a3;
        v14 = *(_DWORD *)(v13 + 16);
        v27 = v14;
        if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v26, &v27) >= 0 )
          return 0LL;
        *v12 = v14;
      }
    }
  }
LABEL_37:
  *v8 = a3;
  return 1LL;
}
