/*
 * XREFs of sub_1800C60C8 @ 0x1800C60C8
 * Callers:
 *     sub_1800059AC @ 0x1800059AC (sub_1800059AC.c)
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 *     sub_1800D1744 @ 0x1800D1744 (sub_1800D1744.c)
 * Callees:
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 */

__int64 *__fastcall sub_1800C60C8(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  sub_1800583E4(a3, a3);
  return a3;
}
