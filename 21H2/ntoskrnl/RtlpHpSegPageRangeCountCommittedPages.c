/*
 * XREFs of RtlpHpSegPageRangeCountCommittedPages @ 0x140315640
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x140314740 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeSplit @ 0x1405951D4 (RtlpHpSegPageRangeSplit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeCountCommittedPages(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v3; // ecx
  int v4; // r9d
  unsigned __int64 v5; // r10
  int v6; // r11d

  v3 = 0;
  v4 = 0;
  v5 = a2 + 32LL * a3;
  v6 = 0;
  if ( a2 >= v5 )
    return 0LL;
  if ( ((32LL * a3 + 31) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x40 )
  {
    do
    {
      v3 += *(unsigned __int8 *)(a2 + 25);
      v4 += *(unsigned __int8 *)(a2 + 57);
      a2 += 64LL;
    }
    while ( a2 < v5 - 32 );
  }
  if ( a2 < v5 )
    v6 = *(unsigned __int8 *)(a2 + 25);
  return (unsigned int)(v6 + v4 + v3);
}
