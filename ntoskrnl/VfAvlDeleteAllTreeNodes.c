/*
 * XREFs of VfAvlDeleteAllTreeNodes @ 0x140AD9230
 * Callers:
 *     VfDeleteLookasideTree @ 0x140ADF214 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140AE15B8 (VfDeleteResourceTree.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableAvl @ 0x1402EF150 (RtlEnumerateGenericTableAvl.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140303B00 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlRaiseIrqlSafe @ 0x140303B34 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140303B6C (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
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
