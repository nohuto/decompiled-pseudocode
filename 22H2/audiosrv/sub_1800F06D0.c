/*
 * XREFs of sub_1800F06D0 @ 0x1800F06D0
 * Callers:
 *     sub_180038BB4 @ 0x180038BB4 (sub_180038BB4.c)
 *     sub_18007CBF1 @ 0x18007CBF1 (sub_18007CBF1.c)
 *     sub_1800F2254 @ 0x1800F2254 (sub_1800F2254.c)
 *     sub_1801343FC @ 0x1801343FC (sub_1801343FC.c)
 *     sub_180134550 @ 0x180134550 (sub_180134550.c)
 *     sub_180134610 @ 0x180134610 (sub_180134610.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

__int64 __fastcall sub_1800F06D0(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = sub_1800472E0(v2, (a1[2] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
