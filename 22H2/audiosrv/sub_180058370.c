/*
 * XREFs of sub_180058370 @ 0x180058370
 * Callers:
 *     sub_18005821C @ 0x18005821C (sub_18005821C.c)
 *     sub_1800D1744 @ 0x1800D1744 (sub_1800D1744.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 */

__int64 __fastcall sub_180058370(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    sub_1800583E4(v6, a1[1]);
    sub_1800472E0(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
