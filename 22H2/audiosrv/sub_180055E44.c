/*
 * XREFs of sub_180055E44 @ 0x180055E44
 * Callers:
 *     sub_180055D08 @ 0x180055D08 (sub_180055D08.c)
 * Callees:
 *     sub_180055E00 @ 0x180055E00 (sub_180055E00.c)
 *     sub_180055E9C @ 0x180055E9C (sub_180055E9C.c)
 */

__int64 __fastcall sub_180055E44(__int64 a1)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d
  __int64 result; // rax

  sub_180055E00(a1);
  *(_QWORD *)a1 = &off_180147218;
  sub_180055E9C(a1 + 24, v2, v3, v4, 1074790400);
  *(_QWORD *)(a1 + 96) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 104) = 0;
  return result;
}
