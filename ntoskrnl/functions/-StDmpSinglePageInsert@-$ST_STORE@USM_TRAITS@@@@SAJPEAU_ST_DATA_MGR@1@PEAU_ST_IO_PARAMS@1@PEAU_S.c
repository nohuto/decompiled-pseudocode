__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  char v4; // bl
  int v8; // ecx
  int v9; // r13d
  int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // r8
  int v16; // eax
  int v18; // r8d
  unsigned __int64 v19; // rax
  int v20; // [rsp+80h] [rbp+8h] BYREF
  _BYTE *v21; // [rsp+88h] [rbp+10h]
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF

  v21 = (_BYTE *)a2;
  v3 = a1 + 24;
  v4 = 1;
  if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (__int64 *)a1,
      a1 + 24);
  *(_DWORD *)(v3 + 32) &= ~1u;
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
  *(_DWORD *)(a1 + 120) &= ~1u;
  if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 128),
      a1 + 152);
    v4 = 1;
  }
  *(_DWORD *)(a1 + 184) &= ~1u;
  v8 = *(_DWORD *)(a1 + 472);
  v22 = 0LL;
  v9 = ((unsigned int)a3 - ((a3 & 0xFFFFF000) + v8)) / *(_DWORD *)(a1 + 464)
     + (*(_DWORD *)((a3 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  LODWORD(v22) = *(_DWORD *)(a2 + 16);
  HIDWORD(v22) = v9;
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (char **)a1,
    v22,
    v3);
  v10 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
          (__int64 *)a1,
          v3,
          &v22);
  if ( v10 >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 776) )
    {
      v11 = *(_DWORD *)(a3 + 4) + 4096;
      *(_DWORD *)(a3 + 4) = v11;
      v12 = v11 >> 12;
      if ( v12 > 1 )
        return 0;
      if ( !v12 )
        NT_ASSERT("PageRecord->RefCount != 0");
    }
    v20 = v9;
    v10 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
            a1 + 64,
            (unsigned int *)&v20,
            a1 + 88);
    if ( v10 < 0 )
      goto LABEL_17;
    v4 = 3;
    if ( !*(_BYTE *)(a1 + 776) )
    {
      v20 = v9;
      v10 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
              a1 + 128,
              v9,
              a1 + 152);
      if ( v10 != -1073741275 )
      {
        if ( v10 >= 0 )
          v10 = -1073741484;
        goto LABEL_17;
      }
      v10 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
              (__int64 *)(a1 + 128),
              a1 + 152,
              &v20,
              v13);
      if ( v10 < 0 )
      {
LABEL_17:
        v14 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
                a1,
                v3);
        if ( v14 < 0 )
        {
          if ( v14 != -1073741818 )
            NT_ASSERT("(((NTSTATUS)(Status2)) >= 0) || Status2 == ((NTSTATUS)0xC0000006L)");
          v10 = -1073741818;
        }
        if ( (v4 & 2) != 0 )
        {
          v16 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
                  a1 + 64,
                  a1 + 88,
                  v15);
          if ( v16 < 0 )
          {
            if ( v16 != -1073741818 )
              NT_ASSERT("(((NTSTATUS)(Status2)) >= 0) || Status2 == ((NTSTATUS)0xC0000006L)");
            return (unsigned int)-1073741818;
          }
        }
        return (unsigned int)v10;
      }
    }
    v18 = 4096;
    if ( (*(_DWORD *)(a3 + 4) & 0xFFF) != 0 )
      v18 = *(_DWORD *)(a3 + 4) & 0xFFF;
    ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(
      a1,
      (unsigned int)(*(_DWORD *)a3 >> *(_DWORD *)(a1 + 812)),
      (unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v18) >> 4,
      0LL);
    v19 = SmEtwEnabled(0);
    if ( v19 )
      SmEtwLogStoreOp(
        v19,
        0,
        (unsigned int)&v22,
        v19,
        *(_DWORD *)a3,
        a1,
        *(_WORD *)(a3 + 4),
        (2 * (*v21 & 7)) | ((*(_DWORD *)v21 & 0x40000000) != 0));
    return 0;
  }
  return (unsigned int)v10;
}
