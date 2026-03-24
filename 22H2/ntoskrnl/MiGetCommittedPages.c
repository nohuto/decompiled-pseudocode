/*
 * XREFs of MiGetCommittedPages @ 0x140297350
 * Callers:
 *     MiDeleteSegmentPages @ 0x14027828C (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x140278478 (MiCreatePrototypePtes.c)
 *     MiReferenceActiveSubsection @ 0x140296380 (MiReferenceActiveSubsection.c)
 *     MiSetPagesModified @ 0x140534FF0 (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140554D28 (MiComputeCrossPartitionSectionCharges.c)
 *     MiRemoveSharedCommitNode @ 0x140638C00 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140638E70 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 *     MiInitializeImageExtents @ 0x1408D00BC (MiInitializeImageExtents.c)
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
