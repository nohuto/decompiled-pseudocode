/*
 * XREFs of RtlInvertRangeList @ 0x140839400
 * Callers:
 *     <none>
 * Callees:
 *     RtlInvertRangeListEx @ 0x140839EF0 (RtlInvertRangeListEx.c)
 */

__int64 __fastcall RtlInvertRangeList(int a1, int a2)
{
  return RtlInvertRangeListEx(a1, a2, 0, 0, 0LL);
}
