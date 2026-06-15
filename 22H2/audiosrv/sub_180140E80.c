/*
 * XREFs of sub_180140E80 @ 0x180140E80
 * Callers:
 *     sub_1801419F8 @ 0x1801419F8 (sub_1801419F8.c)
 * Callees:
 *     sub_180142508 @ 0x180142508 (sub_180142508.c)
 */

__int64 __fastcall sub_180140E80(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = sub_180142508(a1, a2, a1[1]);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
