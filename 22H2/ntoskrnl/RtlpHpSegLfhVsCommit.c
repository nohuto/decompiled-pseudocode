/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x14028A840
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x14028A930 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(int a1)
{
  return RtlpHpSegPageRangeCommit(a1, 0, 0LL);
}
