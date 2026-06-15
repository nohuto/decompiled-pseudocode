/*
 * XREFs of sub_1800B8080 @ 0x1800B8080
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800B7A50 @ 0x1800B7A50 (sub_1800B7A50.c)
 */

_QWORD *__fastcall sub_1800B8080(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // bl

  v3 = a2;
  sub_1800B7A50(a1, a2, a3);
  if ( (v3 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
