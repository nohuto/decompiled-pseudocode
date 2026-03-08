/*
 * XREFs of sub_14075C930 @ 0x14075C930
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 *     sub_14075B3C4 @ 0x14075B3C4 (sub_14075B3C4.c)
 *     sub_14084DFBC @ 0x14084DFBC (sub_14084DFBC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14075C930(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return (*(unsigned __int16 *)(a6 + 2LL * (a1 & 3)) + __ROR4__(~a7, a2 % 0xF + 1))
       * (unsigned int)*(unsigned __int16 *)(a6 + 2LL * (((a1 & 3) + (unsigned __int8)(a3 / 3) + (_BYTE)a3 + 1) & 3));
}
