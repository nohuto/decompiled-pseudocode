/*
 * XREFs of MiBuildWakeList @ 0x140332B34
 * Callers:
 *     MiDecrementModifiedWriteCount @ 0x140212BE4 (MiDecrementModifiedWriteCount.c)
 *     MiPrepareSegmentForDeletion @ 0x140214F04 (MiPrepareSegmentForDeletion.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1402A4E28 (MiUnlockControlAreaSectionExtend.c)
 *     MiUnlockFlushMdl @ 0x1402D6F00 (MiUnlockFlushMdl.c)
 *     MiComputeDataFlushRange @ 0x1403324D0 (MiComputeDataFlushRange.c)
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 *     MiReferenceActiveControlArea @ 0x14034C41C (MiReferenceActiveControlArea.c)
 *     MiPreventControlAreaDeletion @ 0x1403A10A8 (MiPreventControlAreaDeletion.c)
 *     MiDecrementLargeSubsections @ 0x14063A2E8 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14063B558 (MiIncrementLargeSubsections.c)
 *     MiReferencePfBackedSection @ 0x140667510 (MiReferencePfBackedSection.c)
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
