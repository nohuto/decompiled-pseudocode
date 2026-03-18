/*
 * XREFs of RtlCompareMemoryUlong @ 0x14042A260
 * Callers:
 *     MiHashIsCommon @ 0x14020D86C (MiHashIsCommon.c)
 *     MiDeleteSystemPageTable @ 0x140228CD0 (MiDeleteSystemPageTable.c)
 *     MiEvictPageTableLock @ 0x140229100 (MiEvictPageTableLock.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x1403C8AA8 (MiFreedUnusedPfnPagesWorker.c)
 *     MiDoGangAssignment @ 0x1405C00C0 (MiDoGangAssignment.c)
 *     RtlpAllocateHeap @ 0x1405E80B0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405E8A08 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405E8DF8 (RtlpCreateSplitBlock.c)
 *     RtlScrubMemory @ 0x1405EFB90 (RtlScrubMemory.c)
 *     IopTrackLink @ 0x1406D3128 (IopTrackLink.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
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
