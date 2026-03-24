/*
 * XREFs of sub_1406655D0 @ 0x1406655D0
 * Callers:
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     sub_140665D84 @ 0x140665D84 (sub_140665D84.c)
 *     sub_1407C6CA0 @ 0x1407C6CA0 (sub_1407C6CA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406655D0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1)
       + (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROR4__(a7 ^ *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)), a3 % 0x1F + 1);
}
