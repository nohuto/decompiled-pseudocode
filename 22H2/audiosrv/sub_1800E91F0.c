/*
 * XREFs of sub_1800E91F0 @ 0x1800E91F0
 * Callers:
 *     sub_18006EFB0 @ 0x18006EFB0 (sub_18006EFB0.c)
 *     sub_1800E8E10 @ 0x1800E8E10 (sub_1800E8E10.c)
 * Callees:
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 */

__int64 *__fastcall sub_1800E91F0(__int64 **a1)
{
  __int64 *result; // rax

  sub_1800583E4(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
