/*
 * XREFs of sub_180119DB0 @ 0x180119DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180118DBC @ 0x180118DBC (sub_180118DBC.c)
 */

void *__fastcall sub_180119DB0(void *a1, char a2)
{
  sub_180118DBC((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
