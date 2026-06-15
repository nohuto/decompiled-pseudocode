/*
 * XREFs of sub_180109B90 @ 0x180109B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180109AB0 @ 0x180109AB0 (sub_180109AB0.c)
 */

void *__fastcall sub_180109B90(void *a1, char a2)
{
  sub_180109AB0((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
