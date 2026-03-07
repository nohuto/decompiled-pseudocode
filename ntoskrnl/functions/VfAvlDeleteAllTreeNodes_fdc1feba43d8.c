void __fastcall VfAvlDeleteAllTreeNodes(PRTL_AVL_TABLE Table)
{
  PVOID v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  VfAvlInitializeLockContext((__int64)&v3, 0);
  ViAvlRaiseIrqlSafe((__int64)&v3);
  ViAvlAcquireTableLockAtDpcLevelSafe((__int64)Table, (__int64)&v3);
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableAvl(Table, 1u);
    if ( !v2 )
      break;
    RtlDeleteElementGenericTableAvl(Table, v2);
  }
  ViAvlReleaseTableLockFromDpcLevel((__int64)Table, (__int64)&v3);
  VfAvlCleanupLockContext((__int64)&v3);
}
