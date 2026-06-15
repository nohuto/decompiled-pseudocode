/*
 * XREFs of sub_18010046C @ 0x18010046C
 * Callers:
 *     unknown_libname_326 @ 0x180100190 (unknown_libname_326.c)
 *     sub_180102A80 @ 0x180102A80 (sub_180102A80.c)
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 *     sub_180104244 @ 0x180104244 (sub_180104244.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_18010046C(_QWORD *a1)
{
  _o_free(a1[4]);
  a1[4] = 0LL;
  sub_18006A148(a1);
  return a1;
}
