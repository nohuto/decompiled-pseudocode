/*
 * XREFs of RtlAddRange @ 0x14083A010
 * Callers:
 *     IopMemInitialize @ 0x140838FBC (IopMemInitialize.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1408391E8 (ArbAddMmConfigRangeAsBootReserved.c)
 *     IopPortAddAllocation @ 0x140839E40 (IopPortAddAllocation.c)
 *     RtlInvertRangeListEx @ 0x140839EF0 (RtlInvertRangeListEx.c)
 *     ArbAddAllocation @ 0x140839FC0 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14083A5A0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeRangeList @ 0x14090B3B0 (ArbInitializeRangeList.c)
 *     KiTpBuildExcludedKernelTracepointRangeList @ 0x140962930 (KiTpBuildExcludedKernelTracepointRangeList.c)
 * Callees:
 *     RtlpFreeRangeListEntry @ 0x1408398AC (RtlpFreeRangeListEntry.c)
 *     RtlpAddRange @ 0x14083A0B4 (RtlpAddRange.c)
 *     RtlpCreateRangeListEntry @ 0x14083A160 (RtlpCreateRangeListEntry.c)
 */

__int64 __fastcall RtlAddRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
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
  v11 = RtlpAddRange(a1, RangeListEntry, a5);
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
