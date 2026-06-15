/*
 * XREFs of sub_1800036C4 @ 0x1800036C4
 * Callers:
 *     sub_1800036EC @ 0x1800036EC (sub_1800036EC.c)
 *     sub_1800D5210 @ 0x1800D5210 (sub_1800D5210.c)
 *     sub_1800E3468 @ 0x1800E3468 (sub_1800E3468.c)
 *     sub_1800EA7C0 @ 0x1800EA7C0 (sub_1800EA7C0.c)
 * Callees:
 *     sub_180002B50 @ 0x180002B50 (sub_180002B50.c)
 */

__int64 __fastcall sub_1800036C4(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return sub_180002B50(2 * v1);
  return result;
}
