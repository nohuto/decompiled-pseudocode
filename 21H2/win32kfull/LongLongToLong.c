/*
 * XREFs of LongLongToLong @ 0x1C010EC34
 * Callers:
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0131254 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C0139AE4 (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     _TTHmToPixels @ 0x1C016E604 (_TTHmToPixels.c)
 *     _TTPixelsToHm @ 0x1C016E64A (_TTPixelsToHm.c)
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01CACE8 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C026C238 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
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
