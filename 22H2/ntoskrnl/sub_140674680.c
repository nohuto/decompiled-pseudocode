/*
 * XREFs of sub_140674680 @ 0x140674680
 * Callers:
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     sub_140665D84 @ 0x140665D84 (sub_140665D84.c)
 *     sub_1407C6CA0 @ 0x1407C6CA0 (sub_1407C6CA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140674680(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a3 % 0xF + 1)
       + *(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       * (a7 ^ (unsigned int)*(unsigned __int16 *)(a6
                                                 + 2LL * (((a1 & 3) + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)));
}
