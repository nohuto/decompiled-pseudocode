/*
 * XREFs of MiRemoveUnusedSegment @ 0x140219990
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x14020F0D0 (MmGetImageFileSignatureInformation.c)
 *     MiPrepareSegmentForDeletion @ 0x14021980C (MiPrepareSegmentForDeletion.c)
 *     MiReferenceActiveControlArea @ 0x140219930 (MiReferenceActiveControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x140339AD8 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x14035F0D0 (MiAttemptSectionDelete.c)
 *     MiPreventControlAreaDeletion @ 0x1403A5E48 (MiPreventControlAreaDeletion.c)
 *     MiDeleteCachedSubsection @ 0x140623BB8 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x140625E5C (MiSetDeleteOnClose.c)
 *     MiReferencePfBackedSection @ 0x140669B60 (MiReferencePfBackedSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x1402A0E78 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140C674C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1408));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1408));
  }
}
