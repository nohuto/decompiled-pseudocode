/*
 * XREFs of RtlInvertRangeList @ 0x1407B7E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlInvertRangeListEx @ 0x1407B7E80 (RtlInvertRangeListEx.c)
 */

__int64 __fastcall RtlInvertRangeList(int a1, int a2)
{
  return RtlInvertRangeListEx(a1, a2, 0, 0, 0LL);
}
