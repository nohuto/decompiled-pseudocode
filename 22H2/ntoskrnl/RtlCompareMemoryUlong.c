/*
 * XREFs of RtlCompareMemoryUlong @ 0x1404078B0
 * Callers:
 *     MiEvictPageTableLock @ 0x14028CCA0 (MiEvictPageTableLock.c)
 *     MiDeleteSystemPageTable @ 0x14030E4E0 (MiDeleteSystemPageTable.c)
 *     MiHashIsCommon @ 0x14036967C (MiHashIsCommon.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x1403B90F8 (MiFreedUnusedPfnPagesWorker.c)
 *     MiDoGangAssignment @ 0x1405600B0 (MiDoGangAssignment.c)
 *     RtlpAllocateHeap @ 0x140588A70 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405893D0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405897C0 (RtlpCreateSplitBlock.c)
 *     RtlScrubMemory @ 0x1405904A8 (RtlScrubMemory.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     IopTrackLink @ 0x14065E674 (IopTrackLink.c)
 *     MiSwitchToPfns @ 0x140A42F08 (MiSwitchToPfns.c)
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
