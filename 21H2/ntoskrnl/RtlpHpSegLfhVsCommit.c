/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x140314F10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x140315000 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(int a1)
{
  return RtlpHpSegPageRangeCommit(a1, 0, 0LL);
}
