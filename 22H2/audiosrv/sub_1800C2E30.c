/*
 * XREFs of sub_1800C2E30 @ 0x1800C2E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800C2BC0 @ 0x1800C2BC0 (sub_1800C2BC0.c)
 */

void *__fastcall sub_1800C2E30(void *a1, char a2)
{
  sub_1800C2BC0((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
