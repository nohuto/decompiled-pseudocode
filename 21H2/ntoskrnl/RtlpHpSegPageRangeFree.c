/*
 * XREFs of RtlpHpSegPageRangeFree @ 0x1405F31C0
 * Callers:
 *     RtlpHpSegAlloc @ 0x14034FED0 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x140350B40 (RtlpHpSegPageRangeShrink.c)
 */

char __fastcall RtlpHpSegPageRangeFree(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpHpSegPageRangeShrink(a1, a2, a3, (unsigned int)a3);
}
