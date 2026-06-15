/*
 * XREFs of sub_180133498 @ 0x180133498
 * Callers:
 *     sub_1801330A8 @ 0x1801330A8 (sub_1801330A8.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006ADE4 @ 0x18006ADE4 (sub_18006ADE4.c)
 *     sub_1801333EC @ 0x1801333EC (sub_1801333EC.c)
 */

int sub_180133498()
{
  _BYTE v1[512]; // [rsp+40h] [rbp-218h] BYREF

  sub_18006ADE4();
  v1[511] = 0;
  return sub_1801333EC((__int64)v1);
}
