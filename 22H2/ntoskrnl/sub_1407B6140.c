/*
 * XREFs of sub_1407B6140 @ 0x1407B6140
 * Callers:
 *     sub_1406EF620 @ 0x1406EF620 (sub_1406EF620.c)
 *     sub_1407AF0D4 @ 0x1407AF0D4 (sub_1407AF0D4.c)
 *     sub_1408513FC @ 0x1408513FC (sub_1408513FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407B6140(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)) - (*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ a7);
}
