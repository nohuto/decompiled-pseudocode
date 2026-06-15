/*
 * XREFs of sub_1800CE6DC @ 0x1800CE6DC
 * Callers:
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_1800CE9C4 @ 0x1800CE9C4 (sub_1800CE9C4.c)
 * Callees:
 *     sub_18002BDA0 @ 0x18002BDA0 (sub_18002BDA0.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800CE6DC(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  if ( !*(_QWORD *)a1 && !sub_18002BDA0(a1, *(_DWORD *)(a1 + 16), 1) )
    sub_1800B8610(-2147024882);
  return sub_18002B5E0(a1, a2, a3, a4);
}
