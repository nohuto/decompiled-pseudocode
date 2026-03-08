/*
 * XREFs of sub_1407597E0 @ 0x1407597E0
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 *     sub_14075B3C4 @ 0x14075B3C4 (sub_14075B3C4.c)
 *     sub_14084DFBC @ 0x14084DFBC (sub_14084DFBC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407597E0(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1) ^ ((unsigned int)*(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
                                      * __ROL4__(
                                          a7 ^ *(unsigned __int16 *)(a6
                                                                   + 2LL
                                                                   * (((a1 & 3)
                                                                     + (unsigned __int8)(a2 / 3)
                                                                     + (_BYTE)a2
                                                                     + 1) & 3)),
                                          a3 % 7 + 1));
}
