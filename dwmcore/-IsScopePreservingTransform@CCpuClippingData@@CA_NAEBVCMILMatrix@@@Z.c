/*
 * XREFs of ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x1800DFED0
 * Callers:
 *     ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x180022224 (-TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     ?Is3D@CMILMatrix@@QEBA_NXZ @ 0x1800DFF1C (-Is3D@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800DFF64 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 */

char __fastcall CCpuClippingData::IsScopePreservingTransform(const struct CMILMatrix *a1)
{
  float *v1; // r11
  char v2; // bl

  v2 = 0;
  if ( !CMILMatrix::Is3D(a1) )
    return CMILMatrix::IsInvertibleDeterminant((float)(v1[5] * *v1) - (float)(v1[4] * v1[1]));
  return v2;
}
