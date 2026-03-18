/*
 * XREFs of sub_1407B6040 @ 0x1407B6040
 * Callers:
 *     sub_1406EF620 @ 0x1406EF620 (sub_1406EF620.c)
 *     sub_1407AF0D4 @ 0x1407AF0D4 (sub_1407AF0D4.c)
 *     sub_1408513FC @ 0x1408513FC (sub_1408513FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407B6040(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7
       - *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1))
       - (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3));
}
