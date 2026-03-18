/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1402D8304
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x1402D8234 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x1402DB8D8 (VfAvlDeleteTreeNode.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140A9B1BC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140A9B230 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1402D82D0 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall ViAvlAcquireTableLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  char v2; // al
  volatile LONG *v5; // rcx

  v2 = *(_BYTE *)(a2 + 9);
  if ( (v2 & 2) == 0 )
    goto LABEL_2;
  if ( *(_QWORD *)a2 != a1 )
  {
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a2, a2);
    v2 = *(_BYTE *)(a2 + 9);
  }
  if ( (v2 & 2) == 0 )
  {
LABEL_2:
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v2 & 4) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    *(_BYTE *)(a2 + 9) |= 2u;
    *(_QWORD *)a2 = a1;
  }
}
