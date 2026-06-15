/*
 * XREFs of sub_180138D38 @ 0x180138D38
 * Callers:
 *     unknown_libname_64 @ 0x18007CA8A (unknown_libname_64.c)
 * Callees:
 *     sub_18006644C @ 0x18006644C (sub_18006644C.c)
 */

__int64 __fastcall sub_180138D38(__int64 *a1)
{
  sub_18006644C((__int64)a1, (__int64)a1, *(_QWORD *)(*a1 + 8));
  return sub_1800472E0(*a1, 0x60uLL);
}
