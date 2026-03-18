/*
 * XREFs of VfAvlDeleteAllTreeNodes @ 0x140A9B1BC
 * Callers:
 *     VfDeleteLookasideTree @ 0x140A9F094 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140AA1678 (VfDeleteResourceTree.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1402D82D0 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1402D8304 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1402D8360 (ViAvlRaiseIrqlSafe.c)
 *     RtlEnumerateGenericTableAvl @ 0x1402DE820 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     VfAvlInitializeLockContext @ 0x14045F6C8 (VfAvlInitializeLockContext.c)
 */

char __fastcall VfAvlDeleteAllTreeNodes(PRTL_AVL_TABLE Table)
{
  PVOID v2; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  VfAvlInitializeLockContext((__int64)&v4, 0);
  ViAvlRaiseIrqlSafe((__int64)&v4);
  ViAvlAcquireTableLockAtDpcLevelSafe((__int64)Table, (__int64)&v4);
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableAvl(Table, 1u);
    if ( !v2 )
      break;
    RtlDeleteElementGenericTableAvl(Table, v2);
  }
  ViAvlReleaseTableLockFromDpcLevel((__int64)Table, (__int64)&v4);
  return VfAvlCleanupLockContext((__int64)&v4);
}
