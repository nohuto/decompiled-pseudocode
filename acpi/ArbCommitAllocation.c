/*
 * XREFs of ArbCommitAllocation @ 0x1C00A17B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList_0 @ 0x1C0001A1F (RtlFreeRangeList_0.c)
 */

__int64 __fastcall ArbCommitAllocation(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  RtlFreeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
  result = 0LL;
  *(_QWORD *)(a1 + 48) = v2;
  return result;
}
