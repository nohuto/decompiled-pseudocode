/*
 * XREFs of RtlpHpSegFreeRangeRemove @ 0x140308294
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1403067D0 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140307DD0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x14037E1BC (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeRemove(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v6; // ax
  __int64 v7; // rdx
  __int64 result; // rax

  RtlRbRemoveNode(a1 + 96, a2, a3, a4);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v6 = ~(unsigned __int16)*(_DWORD *)(a2 + 28);
  *(_DWORD *)a2 = -857879331;
  v7 = v6;
  result = *(__int16 *)(a1 + 22);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(result + a1 + 16), -v7);
  return result;
}
