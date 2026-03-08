/*
 * XREFs of ULongLongMult @ 0x1C0180240
 * Callers:
 *     ?internal_get_bytecount@?$umptr@U_POINTL@@@@IEBA_KAEB_K0@Z @ 0x1C01800B4 (-internal_get_bytecount@-$umptr@U_POINTL@@@@IEBA_KAEB_K0@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C0185500 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  HRESULT v3; // r9d

  v3 = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = ullMultiplicand * ullMultiplier;
  }
  else
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  return v3;
}
