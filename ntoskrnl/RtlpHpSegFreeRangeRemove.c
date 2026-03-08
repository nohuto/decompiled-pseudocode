/*
 * XREFs of RtlpHpSegFreeRangeRemove @ 0x14024E804
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x14024DF10 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegContextCompact @ 0x1402CC380 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1403BEB28 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeRemove(__int64 a1, unsigned __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  __int64 result; // rax

  RtlRbRemoveNode((unsigned __int64 *)(a1 + 96), a2);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = ~(unsigned __int16)*(_DWORD *)(a2 + 28);
  *(_DWORD *)a2 = -857879331;
  v5 = v4;
  result = *(__int16 *)(a1 + 22);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(result + a1 + 16), -v5);
  return result;
}
