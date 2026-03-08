/*
 * XREFs of RtlCompareMemoryUlong @ 0x140420E50
 * Callers:
 *     MiHashIsCommon @ 0x14022A360 (MiHashIsCommon.c)
 *     MiDeleteSystemPageTable @ 0x140299BA0 (MiDeleteSystemPageTable.c)
 *     MiEvictPageTableLock @ 0x140346460 (MiEvictPageTableLock.c)
 *     MiDoGangAssignment @ 0x140386D14 (MiDoGangAssignment.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x14038ACDC (MiFreedUnusedPfnPagesWorker.c)
 *     RtlpAllocateHeap @ 0x1405A8E28 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405A97B8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405A9BA8 (RtlpCreateSplitBlock.c)
 *     MiZeroHugeRangeWorker @ 0x140620990 (MiZeroHugeRangeWorker.c)
 *     RtlScrubMemory @ 0x1406789B8 (RtlScrubMemory.c)
 *     IopTrackLink @ 0x140795688 (IopTrackLink.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemoryUlong(PVOID Source, SIZE_T Length, ULONG Pattern)
{
  bool v4; // zf
  SIZE_T v5; // rdx
  SIZE_T v6; // rcx

  v5 = Length >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *(_DWORD *)Source == Pattern;
      Source = (char *)Source + 4;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
