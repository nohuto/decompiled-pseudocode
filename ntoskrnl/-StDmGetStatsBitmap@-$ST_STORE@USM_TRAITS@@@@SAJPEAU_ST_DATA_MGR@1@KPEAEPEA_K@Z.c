__int64 __fastcall ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r12
  __int64 *v8; // rbx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 LeafSibling; // rax
  int v14; // r10d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // r8d
  unsigned int v22; // eax
  unsigned int v23; // r8d
  signed int v24; // r10d
  unsigned int v25; // eax
  unsigned __int64 v26; // r8
  char v27; // cl
  __int64 v29[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0LL;
  *(_OWORD *)v29 = 0LL;
  if ( *(_QWORD *)(a1 + 72) )
  {
    if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (__int64 *)a1,
        a1 + 24);
    *(_DWORD *)(a1 + 56) |= 1u;
    v8 = (__int64 *)(a1 + 64);
    if ( (*(_DWORD *)(a1 + 120) & 1) == 0 )
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (__int64 *)(a1 + 64),
        a1 + 88);
    *(_DWORD *)(a1 + 120) |= 1u;
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
    **(_DWORD **)(a1 + 760) = 0;
    v9 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
           a1 + 64,
           *(_DWORD *)(a1 + 768),
           a1 + 88);
    if ( v9 != -1073741818 )
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
        (unsigned __int8 **)(a1 + 64),
        (__int64)v29,
        a1 + 88);
      v10 = v29[1];
      v11 = v29[0];
      while ( 1 )
      {
        if ( !v11 )
          goto LABEL_29;
        v10 += 4LL;
        v12 = (unsigned __int16)*(_DWORD *)v11 + 4LL;
        v29[1] = v10;
        if ( v10 < v11 + 4 * v12 )
          goto LABEL_17;
        if ( **(_DWORD **)((a1 + 80) & -(__int64)(a1 != -64)) == -1 )
          break;
        LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                        a1 + 64,
                        v11);
        if ( LeafSibling != -1 )
          goto LABEL_15;
LABEL_18:
        if ( !LeafSibling )
          goto LABEL_29;
        if ( LeafSibling == -1 )
        {
          v9 = -1073741818;
          goto LABEL_30;
        }
        v14 = 4096;
        v15 = (unsigned int)(*(_DWORD *)LeafSibling >> *(_DWORD *)(a1 + 456));
        _BitScanReverse((unsigned int *)&v16, v15);
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v16 + 192) + 16 * (v15 ^ (unsigned int)(1 << v16)));
        v18 = 4096LL;
        v19 = (unsigned int)(*(_DWORD *)(a1 + 464) * (*(_DWORD *)LeafSibling & *(_DWORD *)(a1 + 460))) + v17;
        v20 = *(unsigned int *)(a1 + 472);
        v21 = *(_DWORD *)(v19 + v20 + 4);
        v22 = *(_DWORD *)(v19 + v20);
        v23 = v21 & 0xFFF;
        if ( v23 )
          v18 = v23;
        v4 += v18;
        if ( v23 )
          v14 = v23;
        v24 = (unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v14) >> 4;
        v25 = v22 / a2;
        if ( v24 )
        {
          do
          {
            v26 = (unsigned __int64)v25 >> 3;
            v27 = v25++ & 7;
            v24 -= a2;
            *(_BYTE *)(v26 + a3) |= 1 << v27;
          }
          while ( v24 > 0 );
        }
      }
      LeafSibling = 3358LL;
      if ( **(_DWORD **)((((unsigned __int64)v8 & -(__int64)(v8 != 0LL)) + 16) & -(__int64)(v8 != 0LL)) == -1 )
        LeafSibling = *(_QWORD *)(v11 + 8);
LABEL_15:
      if ( !LeafSibling )
        goto LABEL_18;
      v10 = LeafSibling + 16;
      v29[0] = LeafSibling;
      v29[1] = LeafSibling + 16;
      v11 = LeafSibling;
LABEL_17:
      LeafSibling = v10;
      goto LABEL_18;
    }
  }
  else
  {
    v8 = (__int64 *)(a1 + 64);
LABEL_29:
    *a4 = v4;
    v9 = 0;
  }
LABEL_30:
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    v29,
    v8);
  return v9;
}
