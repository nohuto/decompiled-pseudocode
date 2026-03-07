char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCleanup(__int64 a1)
{
  char *v2; // rdx

  SmKmCleanup();
  v2 = *(char **)(a1 + 448);
  if ( v2 )
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFree(
      a1 + 448,
      v2);
  SmFpCleanup(a1 + 1424);
  SmFpCleanup(a1 + 1544);
  SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(a1 + 1248, 1LL);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCleanup((PEX_SPIN_LOCK)(a1 + 1264));
  SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(a1 + 1408, 1LL);
  return KeDisableTimer2(a1 + 1680, 1, 1, 0LL);
}
