/*
 * XREFs of ArbAddAllocation @ 0x14081F4F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddRange @ 0x14081F540 (RtlAddRange.c)
 */

__int64 __fastcall ArbAddAllocation(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rax

  v2 = *(_QWORD *)(a2 + 32);
  v3 = *(_QWORD *)(v2 + 32);
  LOBYTE(v2) = *(_BYTE *)(a2 + 66);
  return RtlAddRange(
           *(_QWORD *)(a1 + 48),
           *(_QWORD *)a2,
           *(_QWORD *)(a2 + 8),
           v2,
           2 * (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 1u) + 1,
           0LL,
           v3);
}
