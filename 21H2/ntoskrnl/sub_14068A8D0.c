/*
 * XREFs of sub_14068A8D0 @ 0x14068A8D0
 * Callers:
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     sub_1406860C4 @ 0x1406860C4 (sub_1406860C4.c)
 *     sub_1407C6D80 @ 0x1407C6D80 (sub_1407C6D80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14068A8D0(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)) - (a7 ^ *(_DWORD *)(a6 + 4LL * (a1 & 1)));
}
