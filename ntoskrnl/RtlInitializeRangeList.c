/*
 * XREFs of RtlInitializeRangeList @ 0x14081E6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeRangeList(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = a1;
  return result;
}
