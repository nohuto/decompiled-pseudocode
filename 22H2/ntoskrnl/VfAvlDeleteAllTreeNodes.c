/*
 * XREFs of VfAvlDeleteAllTreeNodes @ 0x140ADD230
 * Callers:
 *     VfDeleteLookasideTree @ 0x140AE3214 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140AE55B8 (VfDeleteResourceTree.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14020A374 (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14020A484 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlRaiseIrqlSafe @ 0x14020A4B8 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14020A4F0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14031E7F0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableAvl @ 0x1403710D0 (RtlEnumerateGenericTableAvl.c)
 *     VfAvlInitializeLockContext @ 0x140465E48 (VfAvlInitializeLockContext.c)
 */

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
