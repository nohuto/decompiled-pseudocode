/*
 * XREFs of sub_1405E9D60 @ 0x1405E9D60
 * Callers:
 *     sub_1405E5224 @ 0x1405E5224 (sub_1405E5224.c)
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 *     sub_1407C70A0 @ 0x1407C70A0 (sub_1407C70A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405E9D60(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)) - (a7 ^ *(_DWORD *)(a6 + 4LL * (a1 & 1)));
}
