/*
 * XREFs of sub_18005B794 @ 0x18005B794
 * Callers:
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 * Callees:
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_18005B794(__int64 a1, _OWORD *a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)sub_1800273F8(a1, a2) )
    return 0LL;
  sub_18004BD84(
    (int)retaddr,
    540,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    -2147024882);
  return 2147942414LL;
}
