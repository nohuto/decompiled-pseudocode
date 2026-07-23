/*
 * XREFs of RtlpHpSegLockAcquire @ 0x1403130D4
 * Callers:
 *     RtlpHpSegContextCompact @ 0x140311520 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140312B20 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140314740 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140334740 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140313100 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegLockAcquire(__int64 a1, char a2)
{
  char result; // al

  result = -1;
  if ( (a2 & 1) == 0 )
    return RtlpHpAcquireLockExclusive(a1 + 64, *(_DWORD *)(a1 + 40) & 1);
  return result;
}
