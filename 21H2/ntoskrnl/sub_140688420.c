/*
 * XREFs of sub_140688420 @ 0x140688420
 * Callers:
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     sub_1406860C4 @ 0x1406860C4 (sub_1406860C4.c)
 *     sub_1407C6D80 @ 0x1407C6D80 (sub_1407C6D80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140688420(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return (*(unsigned __int16 *)(a6 + 2LL * (a1 & 3)) ^ __ROR4__(a7, a2 % 0xF + 1))
       * (unsigned int)*(unsigned __int16 *)(a6 + 2LL * (((a1 & 3) + (unsigned __int8)(a3 / 3) + (_BYTE)a3 + 1) & 3));
}
