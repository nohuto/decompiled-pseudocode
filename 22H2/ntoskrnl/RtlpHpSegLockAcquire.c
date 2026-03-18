/*
 * XREFs of RtlpHpSegLockAcquire @ 0x140316AB8
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x14024DCD0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14024EAB0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegContextCompact @ 0x140337C00 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140316AE4 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegLockAcquire(__int64 a1, char a2)
{
  char result; // al

  result = -1;
  if ( (a2 & 1) == 0 )
    return RtlpHpAcquireLockExclusive(a1 + 64, *(_DWORD *)(a1 + 40) & 1);
  return result;
}
