/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x14030A1C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x14030A2B0 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(int a1)
{
  return RtlpHpSegPageRangeCommit(a1, 0, 0LL);
}
