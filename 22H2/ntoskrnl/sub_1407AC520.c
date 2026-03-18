/*
 * XREFs of sub_1407AC520 @ 0x1407AC520
 * Callers:
 *     sub_1406EF620 @ 0x1406EF620 (sub_1406EF620.c)
 *     sub_1407AF0D4 @ 0x1407AF0D4 (sub_1407AF0D4.c)
 *     sub_1408513FC @ 0x1408513FC (sub_1408513FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407AC520(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1)
       + (unsigned int)*(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       * __ROL4__(
           a7 ^ *(unsigned __int16 *)(a6 + 2LL * (((a1 & 3) + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)),
           a3 % 7 + 1);
}
