/*
 * XREFs of RtlpHpSegLockAcquire @ 0x14030AB78
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1402493A0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14024DF10 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegContextCompact @ 0x1402CC380 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegLockAcquire(__int64 a1, char a2)
{
  char result; // al

  result = -1;
  if ( (a2 & 1) == 0 )
    return RtlpHpAcquireLockExclusive(a1 + 64, *(_DWORD *)(a1 + 40) & 1);
  return result;
}
