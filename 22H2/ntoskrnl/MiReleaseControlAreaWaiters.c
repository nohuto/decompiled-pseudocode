/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x1402D7A34
 * Callers:
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 *     MiTrimSharedPage @ 0x14026F088 (MiTrimSharedPage.c)
 *     MiComputeDataFlushRange @ 0x140295940 (MiComputeDataFlushRange.c)
 *     MiReferenceControlArea @ 0x1402D6FD4 (MiReferenceControlArea.c)
 *     MiUnlockFlushMdl @ 0x1402D7A68 (MiUnlockFlushMdl.c)
 *     MiReferencePfBackedSection @ 0x14031E588 (MiReferencePfBackedSection.c)
 *     MiReferenceExistingControlArea @ 0x14033D3F4 (MiReferenceExistingControlArea.c)
 *     MiReleasePageFileSectionInfo @ 0x140387384 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x140528AF8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140528CEC (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x140529ED8 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x14053D0A0 (MiFlushComplete.c)
 *     MiDecrementLargeSubsections @ 0x140540350 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1405413C0 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541830 (MiPurgeBadFileOnlyPages.c)
 *     MiSegmentDelete @ 0x140635830 (MiSegmentDelete.c)
 *     MiCreateImageOrDataSection @ 0x1406545A0 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x140700490 (MiCreateNewSection.c)
 * Callees:
 *     KeSignalGate @ 0x14031BEE0 (KeSignalGate.c)
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
