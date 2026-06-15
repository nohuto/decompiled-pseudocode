/*
 * XREFs of sub_180105CE0 @ 0x180105CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18010C820 @ 0x18010C820 (sub_18010C820.c)
 */

void *__fastcall sub_180105CE0(void *a1, char a2)
{
  sub_18010C820();
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
