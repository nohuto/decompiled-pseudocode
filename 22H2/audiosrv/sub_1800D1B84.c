/*
 * XREFs of sub_1800D1B84 @ 0x1800D1B84
 * Callers:
 *     sub_1800DAF14 @ 0x1800DAF14 (sub_1800DAF14.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18002D350 @ 0x18002D350 (sub_18002D350.c)
 */

char __fastcall sub_1800D1B84(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = sub_180008448(a1, sub_1800B6240);
  return sub_18002D350(v3, (a1 + 16) & -(__int64)(a1 != 0), (ULONGLONG *)v2[1], &v5, 0LL, 2);
}
