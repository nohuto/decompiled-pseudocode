/*
 * XREFs of sub_18011CCA4 @ 0x18011CCA4
 * Callers:
 *     sub_180117C08 @ 0x180117C08 (sub_180117C08.c)
 *     sub_1801187C4 @ 0x1801187C4 (sub_1801187C4.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 */

_QWORD *__fastcall sub_18011CCA4(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001269C(a2, a1 + 8);
  return a2;
}
