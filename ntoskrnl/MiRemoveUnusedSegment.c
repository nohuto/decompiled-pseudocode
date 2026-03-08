/*
 * XREFs of MiRemoveUnusedSegment @ 0x14034C47C
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x140214F04 (MiPrepareSegmentForDeletion.c)
 *     MiCheckForControlAreaDeletion @ 0x1402CFCF8 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x1402F3B10 (MiAttemptSectionDelete.c)
 *     MiReferenceActiveControlArea @ 0x14034C41C (MiReferenceActiveControlArea.c)
 *     MmGetImageFileSignatureInformation @ 0x140361CA0 (MmGetImageFileSignatureInformation.c)
 *     MiPreventControlAreaDeletion @ 0x1403A10A8 (MiPreventControlAreaDeletion.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x1406239AC (MiSetDeleteOnClose.c)
 *     MiReferencePfBackedSection @ 0x140667510 (MiReferencePfBackedSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x14034C6C4 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1408));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1408));
  }
}
