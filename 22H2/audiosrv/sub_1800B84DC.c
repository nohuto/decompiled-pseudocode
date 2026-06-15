/*
 * XREFs of sub_1800B84DC @ 0x1800B84DC
 * Callers:
 *     sub_180074490 @ 0x180074490 (sub_180074490.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800B7B04 @ 0x1800B7B04 (sub_1800B7B04.c)
 *     sub_1800B7FA0 @ 0x1800B7FA0 (sub_1800B7FA0.c)
 */

_QWORD *__fastcall sub_1800B84DC(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // bl

  v4 = a2;
  sub_1800B7B04(a1 + 5, a2, a3);
  sub_1800B7FA0(a1);
  if ( (v4 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
