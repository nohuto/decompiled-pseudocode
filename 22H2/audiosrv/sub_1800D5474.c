/*
 * XREFs of sub_1800D5474 @ 0x1800D5474
 * Callers:
 *     sub_18007F3E9 @ 0x18007F3E9 (sub_18007F3E9.c)
 * Callees:
 *     sub_180007620 @ 0x180007620 (sub_180007620.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

unsigned __int64 __fastcall sub_1800D5474(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  __int64 v7; // rdx

  v2 = a1[1];
  if ( v2 >= a1[2] && !sub_180007620((__int64)a1, v2 + 1) )
    sub_1800B8610(-2147024882);
  v5 = *a2;
  result = v2;
  v7 = *a1;
  *a2 = 0LL;
  *(_QWORD *)(v7 + 8 * v2) = v5;
  ++a1[1];
  return result;
}
