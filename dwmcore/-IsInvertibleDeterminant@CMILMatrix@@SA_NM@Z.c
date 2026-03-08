/*
 * XREFs of ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800DFF64
 * Callers:
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800059F0 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000A320 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x18008D534 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x1800DFED0 (-IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x18012DF70 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18026CE34 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsInvertibleDeterminant(float a1)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - 0.0) & _xmm) >= 0.00000011920929 && _finite((float)(1.0 / a1)) != 0;
}
