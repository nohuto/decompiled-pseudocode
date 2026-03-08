/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x140214DCC
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x1402D6F00 (MiUnlockFlushMdl.c)
 *     MiReferenceControlArea @ 0x140331908 (MiReferenceControlArea.c)
 *     MiReferenceExistingControlArea @ 0x140361BD4 (MiReferenceExistingControlArea.c)
 *     MiTrimSharedPage @ 0x1403A0EBC (MiTrimSharedPage.c)
 *     MiDeleteCachedSegment @ 0x140621514 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1406229CC (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x140633A40 (MiFlushComplete.c)
 *     MiLocateSharedPageViews @ 0x1406340C0 (MiLocateSharedPageViews.c)
 *     MiReleasePageFileSectionInfo @ 0x140639168 (MiReleasePageFileSectionInfo.c)
 *     MiDecrementLargeSubsections @ 0x14063A2E8 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14063B558 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063C678 (MiPurgeBadFileOnlyPages.c)
 *     MiReferencePfBackedSection @ 0x140667510 (MiReferencePfBackedSection.c)
 *     MiCreateNewSection @ 0x1406A6414 (MiCreateNewSection.c)
 *     MiSegmentDelete @ 0x1406A6FD4 (MiSegmentDelete.c)
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 */

__int64 __fastcall MiReleaseControlAreaWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = KeSignalGate(a1 + 2, 1LL);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
