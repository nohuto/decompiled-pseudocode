/*
 * XREFs of sub_180072190 @ 0x180072190
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180126830 @ 0x180126830 (sub_180126830.c)
 */

void *__fastcall sub_180072190(void *a1, char a2)
{
  sub_180126830();
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
