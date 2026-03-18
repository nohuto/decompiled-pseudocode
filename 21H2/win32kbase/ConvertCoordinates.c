/*
 * XREFs of ConvertCoordinates @ 0x1C01E79C8
 * Callers:
 *     ?GetAdjustedHimetricWithoutRoundTripError@@YAHJJJJJJJPEAJ@Z @ 0x1C01E75EC (-GetAdjustedHimetricWithoutRoundTripError@@YAHJJJJJJJPEAJ@Z.c)
 * Callees:
 *     LongLongToLong @ 0x1C003C44C (LongLongToLong.c)
 */

_BOOL8 __fastcall ConvertCoordinates(int a1, int a2, int a3, int a4, int a5, LONG *plResult)
{
  return LongLongToLong((a4 - a3) * (__int64)(a5 - a1) / (a2 - a1) + a3, plResult) == 0;
}
