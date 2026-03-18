/*
 * XREFs of ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800E0A14
 * Callers:
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180005AE0 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000A410 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C330 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x18008D704 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x1800E0980 (-IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x180132120 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180270564 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsInvertibleDeterminant(float a1)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - 0.0) & _xmm) >= 0.00000011920929 && _finite((float)(1.0 / a1)) != 0;
}
