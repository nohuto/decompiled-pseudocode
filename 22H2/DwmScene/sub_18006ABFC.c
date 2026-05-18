/*
 * XREFs of sub_18006ABFC @ 0x18006ABFC
 * Callers:
 *     sub_180025ED0 @ 0x180025ED0 (sub_180025ED0.c)
 *     sub_180068240 @ 0x180068240 (sub_180068240.c)
 *     sub_18006B940 @ 0x18006B940 (sub_18006B940.c)
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 *     sub_180079804 @ 0x180079804 (sub_180079804.c)
 * Callees:
 *     sub_180061808 @ 0x180061808 (sub_180061808.c)
 */

__int64 __fastcall sub_18006ABFC(__int64 a1)
{
  sub_180061808(a1 + 24);
  return (__int64)(*(_QWORD *)(a1 + 256) - *(_QWORD *)(a1 + 248)) >> 4;
}
