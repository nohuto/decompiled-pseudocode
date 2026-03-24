/*
 * XREFs of RtlCompareMemoryUlong @ 0x140408230
 * Callers:
 *     MiDeleteSystemPageTable @ 0x1402B6DC0 (MiDeleteSystemPageTable.c)
 *     MiEvictPageTableLock @ 0x14030C620 (MiEvictPageTableLock.c)
 *     MiHashIsCommon @ 0x140369D2C (MiHashIsCommon.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x1403B9758 (MiFreedUnusedPfnPagesWorker.c)
 *     MiDoGangAssignment @ 0x140560170 (MiDoGangAssignment.c)
 *     RtlpAllocateHeap @ 0x140588B30 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140589490 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140589880 (RtlpCreateSplitBlock.c)
 *     RtlScrubMemory @ 0x140590568 (RtlScrubMemory.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     IopTrackLink @ 0x1406809F0 (IopTrackLink.c)
 *     MiSwitchToPfns @ 0x140A43AD8 (MiSwitchToPfns.c)
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
