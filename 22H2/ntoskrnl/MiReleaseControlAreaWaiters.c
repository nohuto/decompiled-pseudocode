/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x1402E3F2C
 * Callers:
 *     MiReferenceExistingControlArea @ 0x14020F000 (MiReferenceExistingControlArea.c)
 *     MiReferenceControlArea @ 0x140288198 (MiReferenceControlArea.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14033EB10 (MiUnlockFlushMdl.c)
 *     MiTrimSharedPage @ 0x1403A5C5C (MiTrimSharedPage.c)
 *     MiDeleteCachedSegment @ 0x1406239C4 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140623BB8 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x140624E7C (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x140635ED0 (MiFlushComplete.c)
 *     MiLocateSharedPageViews @ 0x140636550 (MiLocateSharedPageViews.c)
 *     MiReleasePageFileSectionInfo @ 0x14063B5E8 (MiReleasePageFileSectionInfo.c)
 *     MiDecrementLargeSubsections @ 0x14063C764 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14063D9C8 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063EAE0 (MiPurgeBadFileOnlyPages.c)
 *     MiReferencePfBackedSection @ 0x140669B60 (MiReferencePfBackedSection.c)
 *     MiSegmentDelete @ 0x1406B0954 (MiSegmentDelete.c)
 *     MiCreateImageOrDataSection @ 0x1407233C0 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x140746A00 (MiCreateNewSection.c)
 * Callees:
 *     KeSignalGate @ 0x14035CCEC (KeSignalGate.c)
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
