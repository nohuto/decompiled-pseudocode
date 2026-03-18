/*
 * XREFs of sub_1406D7520 @ 0x1406D7520
 * Callers:
 *     sub_1406A74E4 @ 0x1406A74E4 (sub_1406A74E4.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     sub_140855AB0 @ 0x140855AB0 (sub_140855AB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406D7520(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  return *(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROL4__(a7 ^ *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)), a3 % 7 + 1)
       - (a7 >> (a4 % 0xF + 1));
}
