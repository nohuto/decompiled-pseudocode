/*
 * XREFs of sub_1405FAE10 @ 0x1405FAE10
 * Callers:
 *     sub_1405E5224 @ 0x1405E5224 (sub_1405E5224.c)
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 *     sub_1407C70A0 @ 0x1407C70A0 (sub_1407C70A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405FAE10(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  return *(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROL4__(a7 ^ *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)), a3 % 7 + 1)
       - (a7 >> (a4 % 0xF + 1));
}
