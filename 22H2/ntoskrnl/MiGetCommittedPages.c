/*
 * XREFs of MiGetCommittedPages @ 0x1402197E0
 * Callers:
 *     MiDeleteSegmentPages @ 0x140219690 (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x14021BAA0 (MiCreatePrototypePtes.c)
 *     MiReferenceActiveSubsection @ 0x140288C80 (MiReferenceActiveSubsection.c)
 *     MiSetPagesModified @ 0x14062896C (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14066B138 (MiComputeCrossPartitionSectionCharges.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x140722090 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140722410 (MiRemoveSharedCommitNode.c)
 *     MiInitializeImageExtents @ 0x140A33EFC (MiInitializeImageExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCommittedPages(_QWORD *a1)
{
  if ( a1[8] )
    return *(_QWORD *)(*a1 + 16LL);
  else
    return a1[15] & 0xFFFFFFFFFLL;
}
