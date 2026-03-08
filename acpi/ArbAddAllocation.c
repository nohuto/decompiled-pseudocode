/*
 * XREFs of ArbAddAllocation @ 0x1C00A0720
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddRange_0 @ 0x1C0001A43 (RtlAddRange_0.c)
 */

NTSTATUS __fastcall ArbAddAllocation(__int64 a1, __int64 a2)
{
  return RtlAddRange_0(
           *(PRTL_RANGE_LIST *)(a1 + 48),
           *(_QWORD *)a2,
           *(_QWORD *)(a2 + 8),
           *(_BYTE *)(a2 + 66),
           2 * (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 1) + 1,
           0LL,
           *(PVOID *)(*(_QWORD *)(a2 + 32) + 32LL));
}
