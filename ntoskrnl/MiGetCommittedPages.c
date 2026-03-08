/*
 * XREFs of MiGetCommittedPages @ 0x14034C3F0
 * Callers:
 *     MiReferenceActiveSubsection @ 0x1403323F0 (MiReferenceActiveSubsection.c)
 *     MiDeleteSegmentPages @ 0x14034BEB8 (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x14036862C (MiCreatePrototypePtes.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140668AE8 (MiComputeCrossPartitionSectionCharges.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1407D63F0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1407D6770 (MiRemoveSharedCommitNode.c)
 *     MiInitializeImageExtents @ 0x140A311CC (MiInitializeImageExtents.c)
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
