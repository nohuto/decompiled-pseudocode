/*
 * XREFs of RtlpHpSegPageRangeFree @ 0x1405B4660
 * Callers:
 *     RtlpHpSegAlloc @ 0x1402491F0 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x14024DB00 (RtlpHpSegPageRangeShrink.c)
 */

__int64 __fastcall RtlpHpSegPageRangeFree(__int64 a1, __int64 a2, int a3)
{
  return RtlpHpSegPageRangeShrink(a1, a2, a3, a3);
}
