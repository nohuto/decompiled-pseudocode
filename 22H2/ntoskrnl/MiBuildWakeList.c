/*
 * XREFs of MiBuildWakeList @ 0x1402893C4
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14021980C (MiPrepareSegmentForDeletion.c)
 *     MiReferenceActiveControlArea @ 0x140219930 (MiReferenceActiveControlArea.c)
 *     MiComputeDataFlushRange @ 0x140288D60 (MiComputeDataFlushRange.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140292F50 (MiUnlockControlAreaSectionExtend.c)
 *     MiCheckControlArea @ 0x14029FAA0 (MiCheckControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x1402F4824 (MiDecrementModifiedWriteCount.c)
 *     MiUnlockFlushMdl @ 0x14033EB10 (MiUnlockFlushMdl.c)
 *     MiPreventControlAreaDeletion @ 0x1403A5E48 (MiPreventControlAreaDeletion.c)
 *     MiDecrementLargeSubsections @ 0x14063C764 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14063D9C8 (MiIncrementLargeSubsections.c)
 *     MiReferencePfBackedSection @ 0x140669B60 (MiReferencePfBackedSection.c)
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
