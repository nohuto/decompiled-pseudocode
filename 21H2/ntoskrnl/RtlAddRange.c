/*
 * XREFs of RtlAddRange @ 0x1407645D0
 * Callers:
 *     IopMemInitialize @ 0x1407A1E34 (IopMemInitialize.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1407A2060 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1407A226C (ArbAddInaccessibleAllocationRange.c)
 *     RtlInvertRangeListEx @ 0x1407B7E80 (RtlInvertRangeListEx.c)
 *     ArbAddAllocation @ 0x1407BA0D0 (ArbAddAllocation.c)
 *     IopPortAddAllocation @ 0x1407C7FC0 (IopPortAddAllocation.c)
 *     ArbInitializeRangeList @ 0x140867210 (ArbInitializeRangeList.c)
 *     KiTpBuildExcludedKernelTracepointRangeList @ 0x1408BCAD4 (KiTpBuildExcludedKernelTracepointRangeList.c)
 * Callees:
 *     RtlpFreeRangeListEntry @ 0x140761828 (RtlpFreeRangeListEntry.c)
 *     RtlpAddRange @ 0x140764674 (RtlpAddRange.c)
 *     RtlpCreateRangeListEntry @ 0x140764720 (RtlpCreateRangeListEntry.c)
 */

__int64 __fastcall RtlAddRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // r10d
  __int64 RangeListEntry; // rax
  void *v10; // rbx
  int v11; // esi

  v7 = a3;
  if ( a3 < a2 )
    return 3221225485LL;
  LOBYTE(a3) = a4;
  RangeListEntry = RtlpCreateRangeListEntry(a2, v7, a3, a6, a7);
  v10 = (void *)RangeListEntry;
  if ( !RangeListEntry )
    return 3221225473LL;
  if ( (a5 & 2) != 0 )
    *(_BYTE *)(RangeListEntry + 33) |= 1u;
  if ( (a5 & 0x10) != 0 )
    *(_BYTE *)(RangeListEntry + 33) |= 0x10u;
  v11 = RtlpAddRange(a1, RangeListEntry);
  if ( v11 < 0 )
  {
    RtlpFreeRangeListEntry(v10);
  }
  else
  {
    ++*(_DWORD *)(a1 + 20);
    ++*(_DWORD *)(a1 + 24);
  }
  return (unsigned int)v11;
}
