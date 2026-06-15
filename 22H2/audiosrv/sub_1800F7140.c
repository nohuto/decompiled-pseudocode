/*
 * XREFs of sub_1800F7140 @ 0x1800F7140
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800F701C @ 0x1800F701C (sub_1800F701C.c)
 */

void *__fastcall sub_1800F7140(void *a1, char a2)
{
  sub_1800F701C((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
