/*
 * XREFs of LongLongToLong @ 0x1C00A7CFC
 * Callers:
 *     rimConvertCoordinatesWithRounding @ 0x1C00EFE8A (rimConvertCoordinatesWithRounding.c)
 *     ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x1C021738C (-GetAdjustedHimetricLong@@YAHJJJPEAJ@Z.c)
 *     ConvertCoordinates @ 0x1C0217828 (ConvertCoordinates.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C0217910 (GetAdjustedPointerPixelLocation.c)
 *     _SetHimetricToPixelRatio @ 0x1C0218F50 (_SetHimetricToPixelRatio.c)
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C0223218 (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall LongLongToLong(LONGLONG llOperand, LONG *plResult)
{
  HRESULT result; // eax

  if ( (unsigned __int64)(llOperand + 0x80000000LL) > 0xFFFFFFFF )
  {
    result = -2147024362;
    LODWORD(llOperand) = -1;
  }
  else
  {
    result = 0;
  }
  *plResult = llOperand;
  return result;
}
