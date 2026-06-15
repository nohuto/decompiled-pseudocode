/*
 * XREFs of sub_1800EA84C @ 0x1800EA84C
 * Callers:
 *     sub_180013120 @ 0x180013120 (sub_180013120.c)
 *     sub_1800EA5E0 @ 0x1800EA5E0 (sub_1800EA5E0.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

LPVOID *__fastcall sub_1800EA84C(LPVOID *a1)
{
  sub_18006A148(a1[7]);
  a1[7] = 0LL;
  CoTaskMemFree(a1[2]);
  a1[2] = 0LL;
  CoTaskMemFree(*a1);
  *a1 = 0LL;
  sub_18006A148(a1);
  return a1;
}
