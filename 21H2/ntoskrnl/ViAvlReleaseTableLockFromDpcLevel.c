/*
 * XREFs of ViAvlReleaseTableLockFromDpcLevel @ 0x140371C0C
 * Callers:
 *     VfAvlCleanupLockContext @ 0x140371B24 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140371B70 (VfAvlInsertReservedTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371C40 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlDeleteTreeNode @ 0x14037EB38 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14037EBF4 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x1409E0658 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall ViAvlReleaseTableLockFromDpcLevel(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rcx

  v2 = (volatile LONG *)(a1 + 128);
  if ( (*(_BYTE *)(a2 + 9) & 4) != 0 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v2);
  *(_BYTE *)(a2 + 9) &= ~2u;
  *(_QWORD *)a2 = 0LL;
}
