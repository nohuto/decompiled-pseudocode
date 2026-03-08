/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140303B6C
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x140303394 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x140303A48 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140AD9230 (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140AD92A4 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140303B00 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall ViAvlAcquireTableLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  char v4; // al
  volatile LONG *v5; // rcx

  if ( (*(_BYTE *)(a2 + 9) & 2) != 0 && *(_QWORD *)a2 != a1 )
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a2, a2);
  v4 = *(_BYTE *)(a2 + 9);
  if ( (v4 & 2) == 0 )
  {
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v4 & 4) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    *(_BYTE *)(a2 + 9) |= 2u;
    *(_QWORD *)a2 = a1;
  }
}
