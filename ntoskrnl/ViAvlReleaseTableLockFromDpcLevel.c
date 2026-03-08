/*
 * XREFs of ViAvlReleaseTableLockFromDpcLevel @ 0x140303B00
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x140303394 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140303A48 (VfAvlInsertReservedTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140303B6C (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140AD9230 (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140AD92A4 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
