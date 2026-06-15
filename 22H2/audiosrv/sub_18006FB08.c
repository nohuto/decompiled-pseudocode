/*
 * XREFs of sub_18006FB08 @ 0x18006FB08
 * Callers:
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z @ 0x1800386EC (-getZName@UnDecorator@@CA-AVDName@@_N0@Z.c)
 *     sub_1800ED858 @ 0x1800ED858 (sub_1800ED858.c)
 * Callees:
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 */

__int64 *__fastcall sub_18006FB08(__int64 *a1, __int64 *a2)
{
  *a1 = *a2;
  sub_180047458(a1);
  return a1;
}
