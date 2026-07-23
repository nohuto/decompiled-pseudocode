/*
 * XREFs of RtlCompareMemoryUlong @ 0x140408410
 * Callers:
 *     MiDeleteSystemPageTable @ 0x140234FA0 (MiDeleteSystemPageTable.c)
 *     MiEvictPageTableLock @ 0x140317370 (MiEvictPageTableLock.c)
 *     MiHashIsCommon @ 0x140369EDC (MiHashIsCommon.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x1403B98C8 (MiFreedUnusedPfnPagesWorker.c)
 *     MiDoGangAssignment @ 0x1405603B0 (MiDoGangAssignment.c)
 *     RtlpAllocateHeap @ 0x140588D60 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405896C0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140589AB0 (RtlpCreateSplitBlock.c)
 *     RtlScrubMemory @ 0x140590798 (RtlScrubMemory.c)
 *     IopTrackLink @ 0x1405DBA34 (IopTrackLink.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     MiSwitchToPfns @ 0x140A44AD8 (MiSwitchToPfns.c)
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
