/*
 * XREFs of sub_180056A40 @ 0x180056A40
 * Callers:
 *     sub_180075390 @ 0x180075390 (sub_180075390.c)
 * Callees:
 *     sub_180056A7C @ 0x180056A7C (sub_180056A7C.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall sub_180056A40(__int64 a1, char a2)
{
  sub_180056A7C();
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 1304LL);
  return a1;
}
