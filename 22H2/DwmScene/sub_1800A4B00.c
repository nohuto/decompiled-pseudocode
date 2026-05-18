/*
 * XREFs of sub_1800A4B00 @ 0x1800A4B00
 * Callers:
 *     sub_18009F388 @ 0x18009F388 (sub_18009F388.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 */

_QWORD *__fastcall sub_1800A4B00(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001CDF8(a2, a1 + 24);
  return a2;
}
