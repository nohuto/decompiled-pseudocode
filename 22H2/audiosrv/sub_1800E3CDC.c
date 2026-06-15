/*
 * XREFs of sub_1800E3CDC @ 0x1800E3CDC
 * Callers:
 *     sub_180013360 @ 0x180013360 (sub_180013360.c)
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_18002F780 @ 0x18002F780 (sub_18002F780.c)
 *     sub_180031060 @ 0x180031060 (sub_180031060.c)
 *     sub_180045D70 @ 0x180045D70 (sub_180045D70.c)
 *     unknown_libname_298 @ 0x1800E33C4 (unknown_libname_298.c)
 *     sub_1800EA560 @ 0x1800EA560 (sub_1800EA560.c)
 *     sub_1800EA5C0 @ 0x1800EA5C0 (sub_1800EA5C0.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 *     sub_1800EC88C @ 0x1800EC88C (sub_1800EC88C.c)
 *     sub_1800ED858 @ 0x1800ED858 (sub_1800ED858.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

LPVOID *__fastcall sub_1800E3CDC(LPVOID *a1)
{
  CoTaskMemFree(a1[3]);
  a1[3] = 0LL;
  CoTaskMemFree(a1[2]);
  a1[2] = 0LL;
  CoTaskMemFree(*a1);
  *a1 = 0LL;
  sub_18006A148(a1);
  return a1;
}
