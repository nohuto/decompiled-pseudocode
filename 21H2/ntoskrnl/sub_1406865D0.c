/*
 * XREFs of sub_1406865D0 @ 0x1406865D0
 * Callers:
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     sub_1406860C4 @ 0x1406860C4 (sub_1406860C4.c)
 *     sub_1407C6D80 @ 0x1407C6D80 (sub_1407C6D80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406865D0(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  return (a7 - *(unsigned __int16 *)(a6 + 2LL * (((a1 & 3) + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)))
       * *(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       - (a7 >> (a3 % 0xF + 1));
}
