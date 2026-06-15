/*
 * XREFs of sub_1801111A0 @ 0x1801111A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18011102C @ 0x18011102C (sub_18011102C.c)
 */

void *__fastcall sub_1801111A0(void *a1, char a2)
{
  sub_18011102C((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
