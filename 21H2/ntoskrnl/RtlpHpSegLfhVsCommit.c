/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x140350700
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x1403507F0 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(int a1)
{
  return RtlpHpSegPageRangeCommit(a1, 0, 0LL);
}
