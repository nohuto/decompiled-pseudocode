/*
 * XREFs of RtlCompareMemoryUlong @ 0x1404291E0
 * Callers:
 *     MiHashIsCommon @ 0x140215F50 (MiHashIsCommon.c)
 *     MiDeleteSystemPageTable @ 0x14021DE10 (MiDeleteSystemPageTable.c)
 *     MiEvictPageTableLock @ 0x1402E5230 (MiEvictPageTableLock.c)
 *     MiDoGangAssignment @ 0x140389954 (MiDoGangAssignment.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x14038D19C (MiFreedUnusedPfnPagesWorker.c)
 *     RtlpAllocateHeap @ 0x1405AB2D8 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405ABC68 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405AC058 (RtlpCreateSplitBlock.c)
 *     MiZeroHugeRangeWorker @ 0x140622E40 (MiZeroHugeRangeWorker.c)
 *     RtlScrubMemory @ 0x14067B008 (RtlScrubMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     IopTrackLink @ 0x1407E4898 (IopTrackLink.c)
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
