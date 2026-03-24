/*
 * XREFs of MiRemoveUnusedSegment @ 0x1402D7B58
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x140278384 (MiPrepareSegmentForDeletion.c)
 *     MiComputeDataFlushRange @ 0x140295940 (MiComputeDataFlushRange.c)
 *     MiReferenceActiveControlArea @ 0x1402D7AF8 (MiReferenceActiveControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x1402F4FB8 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x1403109B4 (MiAttemptSectionDelete.c)
 *     MiReferencePfBackedSection @ 0x14031E588 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x14031E7D0 (MiPreventControlAreaDeletion.c)
 *     MmGetImageFileSignatureInformation @ 0x14033D350 (MmGetImageFileSignatureInformation.c)
 *     MiDeleteCachedSubsection @ 0x140528CEC (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x14052A954 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x1402D7C78 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  }
}
