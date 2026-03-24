/*
 * XREFs of MiBuildWakeList @ 0x1402D7C30
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x140278384 (MiPrepareSegmentForDeletion.c)
 *     MiCheckControlArea @ 0x140295130 (MiCheckControlArea.c)
 *     MiComputeDataFlushRange @ 0x140295940 (MiComputeDataFlushRange.c)
 *     MiReferenceActiveControlArea @ 0x1402D7AF8 (MiReferenceActiveControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x1402D7BB8 (MiDecrementModifiedWriteCount.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1402F9584 (MiUnlockControlAreaSectionExtend.c)
 *     MiReferencePfBackedSection @ 0x14031E588 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x14031E7D0 (MiPreventControlAreaDeletion.c)
 *     MiDecrementLargeSubsections @ 0x140540350 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1405413C0 (MiIncrementLargeSubsections.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiBuildWakeList(__int64 a1, int a2)
{
  _QWORD *v2; // r10
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v6; // r8

  v2 = (_QWORD *)(a1 + 80);
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 80);
  if ( v4 )
  {
    do
    {
      v6 = (__int64 *)*v4;
      if ( (a2 & (_DWORD)v4[1]) != 0 )
      {
        if ( (a2 & 4) != 0 )
        {
          *((_DWORD *)v4 + 3) = 1;
        }
        else
        {
          *v4 = (__int64)v3;
          v3 = v4;
          *v2 = v6;
        }
      }
      else
      {
        v2 = v4;
      }
      v4 = v6;
    }
    while ( v6 );
  }
  return v3;
}
