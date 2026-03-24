/*
 * XREFs of ?CalcMatrixEpsilonValue@@YA?AW4MatrixEpsilonValue@@M@Z @ 0x1800163E0
 * Callers:
 *     ?RecordTransformAndColorSpace@CFlipExSwapchainStatistics@@UEAA_NAEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180016350 (-RecordTransformAndColorSpace@CFlipExSwapchainStatistics@@UEAA_NAEBVCMILMatrix@@W4DXGI_COLOR_SPA.c)
 * Callees:
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x180094908 (-IsCloseRealZero@@YA_NMM@Z.c)
 */

__int64 __fastcall CalcMatrixEpsilonValue(float a1)
{
  bool v1; // al
  unsigned int v2; // ecx

  v1 = IsCloseRealZero(a1, 0.000081380211);
  v2 = 0;
  if ( !v1 )
  {
    v2 = -1;
    if ( a1 > 0.0 )
      return 1;
  }
  return v2;
}
