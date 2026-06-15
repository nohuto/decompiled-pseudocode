/*
 * XREFs of sub_1800C5F04 @ 0x1800C5F04
 * Callers:
 *     sub_1800C90C4 @ 0x1800C90C4 (sub_1800C90C4.c)
 *     sub_1800D30A8 @ 0x1800D30A8 (sub_1800D30A8.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800C5F04(int a1, int a2)
{
  if ( 0x7FFFFFFF - a1 < a2 )
    sub_1800B8610(-2147024809);
  return (unsigned int)(a1 + a2);
}
