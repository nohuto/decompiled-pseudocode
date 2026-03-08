/*
 * XREFs of ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A530
 * Callers:
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x18005A02C (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18005CF00 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x1800B4B7C (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x1800D2EFC (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800E5C14 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801AAFC0 (_anonymous_namespace_--DecomposeMatrix.c)
 *     TryFillRenderState @ 0x1801C9918 (TryFillRenderState.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x1801D0340 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180222D50 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005B510 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

char __fastcall CMILMatrix::Is2DAffine<1>(__int64 a1, __int64 a2)
{
  char result; // al
  char v4; // al
  char v5; // r11

  if ( (_BYTE)a2 )
    return CMILMatrix::IsAffine<1>(a1, a2);
  v4 = (char)(16 * *(_BYTE *)(a1 + 65)) >> 6;
  if ( v4 )
    return v4 == 1;
  if ( (unsigned __int8)CMILMatrix::IsAffine<1>(a1, 0LL)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & _xmm) < 0.000081380211 )
  {
    v5 = 1;
  }
  *(_BYTE *)(a1 + 65) &= 0xF3u;
  result = v5;
  *(_BYTE *)(a1 + 65) |= (-4 - 8 * v5) & 0xC;
  return result;
}
