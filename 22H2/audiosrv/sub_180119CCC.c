/*
 * XREFs of sub_180119CCC @ 0x180119CCC
 * Callers:
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_180119D08 @ 0x180119D08 (sub_180119D08.c)
 *     sub_18011E704 @ 0x18011E704 (sub_18011E704.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

LPVOID *__fastcall sub_180119CCC(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
  sub_18006A148(a1);
  return a1;
}
