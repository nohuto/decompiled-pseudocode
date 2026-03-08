/*
 * XREFs of RIMTransformPointerDevicePointToPhysical @ 0x1C00EFE38
 * Callers:
 *     RIMApplyTransforms @ 0x1C01BD0C8 (RIMApplyTransforms.c)
 *     RIMSetContactBoundary @ 0x1C01BDA20 (RIMSetContactBoundary.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C01BE1E0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C01BE2D0 (RIMTransformDimensionFromDigitizer.c)
 *     rimComputeHimetricGeometry @ 0x1C01D5D8C (rimComputeHimetricGeometry.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1C01BD270 (RIMConvertPointCoordinates.c)
 */

__int64 __fastcall RIMTransformPointerDevicePointToPhysical(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = RIMConvertPointCoordinates(a2);
  if ( !(_DWORD)result )
  {
    *a3 = 0;
    a3[1] = 0;
  }
  return result;
}
