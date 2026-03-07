void __fastcall ST_STORE<SM_TRAITS>::StDmCleanup(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  PVOID *v5; // r15
  _QWORD *v6; // rbx
  __int64 v7; // rbx
  __int16 v8; // r8
  __int64 v9; // r14
  unsigned int *v10; // rbx
  __int64 v11; // rbp
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1 + 192;
  SmHpChunkHeapProtect(a1 + 192, 1LL);
  if ( *(_QWORD *)(a1 + 760) )
  {
    SmHpChunkFree(v2);
    if ( a2 )
    {
      *(_QWORD *)(a1 + 760) = 0LL;
      *(_DWORD *)(a1 + 768) = 0;
    }
  }
  v19 = *(_QWORD *)(a1 + 464);
  SmHpChunkHeapCleanup(v2);
  if ( a2 )
    SmHpChunkHeapInitialize(v2, &v19);
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
    a1,
    a1 + 24,
    a2);
  if ( *(_QWORD *)a1 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(a1);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
    a1 + 64,
    a1 + 88,
    a2);
  if ( *(_QWORD *)(a1 + 64) )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(a1 + 64);
  v5 = (PVOID *)(a1 + 152);
  v6 = (_QWORD *)(a1 + 128);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    a1 + 128,
    a1 + 152);
  if ( *(_DWORD *)(a1 + 176) != -1 && *v5 && !a2 )
    ExFreePoolWithTag(*v5, 0);
  if ( *v6 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(a1 + 128);
  if ( a2 )
  {
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_OWORD *)v6 = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1376), a2);
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1512), a2);
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1648), a2);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 16) = a1 + 1376;
    *(_QWORD *)(a1 + 80) = a1 + 1512;
    *(_QWORD *)(a1 + 144) = a1 + 1648;
  }
  if ( *(_QWORD *)(a1 + 1032) )
  {
    ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1);
    LODWORD(v7) = -1;
    while ( 1 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (_DWORD)v7 == *(_DWORD *)(a1 + 788) )
        break;
      v8 = *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v7);
      if ( (v8 & 0x1FFF) != 0 )
        ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, (unsigned int)v7, -(v8 & 0x1FFF), 0LL);
    }
    if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
      && !a2
      && *(_DWORD *)(a1 + 840) != RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 840)) )
    {
      ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 1LL, a1 + 864);
    }
    v9 = *(_QWORD *)(a1 + 1032);
    v10 = (unsigned int *)(a1 + 1104);
    v11 = 6LL;
    while ( a2 )
    {
      v18 = *v10;
      if ( (_DWORD)v18 == -1 )
        goto LABEL_52;
      if ( *(_WORD *)(v9 + 2 * v18) < 0x4000u )
        break;
LABEL_30:
      v10 += 6;
      if ( !--v11 )
        goto LABEL_31;
    }
    if ( *v10 != -1 )
    {
      ExFreePoolWithTag(*((PVOID *)v10 + 1), 0);
      ExFreePoolWithTag(*((PVOID *)v10 + 2), 0);
    }
    if ( !a2 )
      goto LABEL_30;
LABEL_52:
    *(_OWORD *)v10 = 0LL;
    *((_QWORD *)v10 + 2) = 0LL;
    *v10 = -1;
    goto LABEL_30;
  }
LABEL_31:
  if ( !a2 )
  {
    v12 = *(void **)(a1 + 1056);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    v13 = *(void **)(a1 + 848);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    v14 = *(void **)(a1 + 1080);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    v15 = *(void **)(a1 + 1792);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    v16 = *(void **)(a1 + 1800);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    v17 = *(void **)(a1 + 1808);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
}
