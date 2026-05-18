/*
 * XREFs of sub_1800C97B8 @ 0x1800C97B8
 * Callers:
 *     sub_1800A07A4 @ 0x1800A07A4 (sub_1800A07A4.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 */

__int64 *__fastcall sub_1800C97B8(__int64 a1, __int64 a2)
{
  __int64 v4[7]; // [rsp+20h] [rbp-38h] BYREF

  v4[2] = 0LL;
  v4[3] = 0LL;
  sub_18001CDF8(v4, a2);
  return sub_1800628C4(a1, v4);
}
