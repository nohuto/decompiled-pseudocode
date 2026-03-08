/*
 * XREFs of ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x18012DF70
 * Callers:
 *     ?IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18012E2A0 (-IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x180220340 (-IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800094F0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004B1A0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800DFF64 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1801306F8 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

bool __fastcall CCompositionLight::IsValidCoordinateSpace(
        CCompositionLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3,
        struct CVisual *a4)
{
  const struct Windows::Foundation::Numerics::float4x4 *v6; // rdx
  float v7; // xmm0_4
  _BYTE v9[64]; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+70h] [rbp-18h]

  if ( !CVisualTree::_IsInTree(a2, (__int64)a4, 1) )
    return 0;
  v10 = 0;
  if ( (int)CVisual::GetWorldTransform(a4, a2, 3, (struct CMILMatrix *)v9, 0LL, 0LL) < 0 )
    return 0;
  v7 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v9, v6);
  return CMILMatrix::IsInvertibleDeterminant(v7);
}
