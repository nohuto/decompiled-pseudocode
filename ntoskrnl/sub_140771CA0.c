/*
 * XREFs of sub_140771CA0 @ 0x140771CA0
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 *     sub_14075B3C4 @ 0x14075B3C4 (sub_14075B3C4.c)
 *     sub_14084DFBC @ 0x14084DFBC (sub_14084DFBC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140771CA0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  return *(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROL4__(*(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) ^ a7, a3 % 7 + 1)
       - (a7 >> (a4 % 0xF + 1));
}
