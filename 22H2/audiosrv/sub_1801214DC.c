/*
 * XREFs of sub_1801214DC @ 0x1801214DC
 * Callers:
 *     sub_180120C98 @ 0x180120C98 (sub_180120C98.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

__int64 __fastcall sub_1801214DC(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    sub_1800472E0(v6, 20 * ((a1[2] - v6) / 20));
  *a1 = a2;
  result = 5 * a4;
  a1[1] = a2 + 20 * a3;
  a1[2] = a2 + 20 * a4;
  return result;
}
