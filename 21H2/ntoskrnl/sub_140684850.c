/*
 * XREFs of sub_140684850 @ 0x140684850
 * Callers:
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     sub_1406860C4 @ 0x1406860C4 (sub_1406860C4.c)
 *     sub_1407C6D80 @ 0x1407C6D80 (sub_1407C6D80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140684850(
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
