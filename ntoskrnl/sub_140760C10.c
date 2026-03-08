/*
 * XREFs of sub_140760C10 @ 0x140760C10
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 *     sub_14075B3C4 @ 0x14075B3C4 (sub_14075B3C4.c)
 *     sub_14084DFBC @ 0x14084DFBC (sub_14084DFBC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140760C10(
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
       * __ROR4__(a7 + *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)), a3 % 0x1F + 1);
}
