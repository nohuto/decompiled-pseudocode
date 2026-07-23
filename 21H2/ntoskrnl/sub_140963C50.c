/*
 * XREFs of sub_140963C50 @ 0x140963C50
 * Callers:
 *     sub_1405E5224 @ 0x1405E5224 (sub_1405E5224.c)
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 *     sub_1407C70A0 @ 0x1407C70A0 (sub_1407C70A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140963C50(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return *(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       * (a7 ^ (unsigned int)*(unsigned __int16 *)(a6
                                                 + 2LL * (((a1 & 3) + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)))
       - __ROR4__(a7, a3 % 0xF + 1);
}
