/*
 * XREFs of sub_180046570 @ 0x180046570
 * Callers:
 *     sub_180069566 @ 0x180069566 (sub_180069566.c)
 *     sub_1800695F1 @ 0x1800695F1 (sub_1800695F1.c)
 *     sub_18006AE50 @ 0x18006AE50 (sub_18006AE50.c)
 *     sub_18006AEDB @ 0x18006AEDB (sub_18006AEDB.c)
 *     sub_18006AF66 @ 0x18006AF66 (sub_18006AF66.c)
 *     sub_18006AFF1 @ 0x18006AFF1 (sub_18006AFF1.c)
 *     sub_18006B07C @ 0x18006B07C (sub_18006B07C.c)
 *     sub_18006B107 @ 0x18006B107 (sub_18006B107.c)
 *     sub_18006B1A4 @ 0x18006B1A4 (sub_18006B1A4.c)
 *     sub_18006B22F @ 0x18006B22F (sub_18006B22F.c)
 *     sub_18006B36E @ 0x18006B36E (sub_18006B36E.c)
 *     sub_18006B489 @ 0x18006B489 (sub_18006B489.c)
 *     sub_18006B526 @ 0x18006B526 (sub_18006B526.c)
 *     sub_18006B69B @ 0x18006B69B (sub_18006B69B.c)
 *     sub_18006BB1C @ 0x18006BB1C (sub_18006BB1C.c)
 *     sub_18006BBA7 @ 0x18006BBA7 (sub_18006BBA7.c)
 *     sub_18006BCE6 @ 0x18006BCE6 (sub_18006BCE6.c)
 *     sub_18006BD86 @ 0x18006BD86 (sub_18006BD86.c)
 *     sub_18006BE11 @ 0x18006BE11 (sub_18006BE11.c)
 *     sub_18006BF28 @ 0x18006BF28 (sub_18006BF28.c)
 *     sub_18006BFC5 @ 0x18006BFC5 (sub_18006BFC5.c)
 *     sub_18006C0B6 @ 0x18006C0B6 (sub_18006C0B6.c)
 *     sub_18006C198 @ 0x18006C198 (sub_18006C198.c)
 *     sub_18006C223 @ 0x18006C223 (sub_18006C223.c)
 *     sub_18006C50C @ 0x18006C50C (sub_18006C50C.c)
 *     sub_18006C8A2 @ 0x18006C8A2 (sub_18006C8A2.c)
 *     sub_18006C975 @ 0x18006C975 (sub_18006C975.c)
 *     sub_18006CA36 @ 0x18006CA36 (sub_18006CA36.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180046570(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(&_ImageBase, a1, 0LL, DelayLoadFailureHook, a2, 0);
}
