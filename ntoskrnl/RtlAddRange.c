/*
 * XREFs of RtlAddRange @ 0x14081F540
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x14081E1A4 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14081EF14 (ArbAddMmConfigRangeAsBootReserved.c)
 *     IopMemInitialize @ 0x14081F124 (IopMemInitialize.c)
 *     IopPortAddAllocation @ 0x14081F360 (IopPortAddAllocation.c)
 *     RtlInvertRangeListEx @ 0x14081F400 (RtlInvertRangeListEx.c)
 *     ArbAddAllocation @ 0x14081F4F0 (ArbAddAllocation.c)
 *     ArbInitializeRangeList @ 0x1409331D0 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlpCreateRangeListEntry @ 0x14081F5E4 (RtlpCreateRangeListEntry.c)
 *     RtlpAddRange @ 0x14081F654 (RtlpAddRange.c)
 *     RtlpFreeRangeListEntry @ 0x140820318 (RtlpFreeRangeListEntry.c)
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
  void *v10; // rdi
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
