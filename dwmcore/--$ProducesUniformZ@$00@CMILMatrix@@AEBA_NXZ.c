/*
 * XREFs of ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180059E30
 * Callers:
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180058018 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18005B0A0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800705F0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x18008D534 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800DB8E4 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@U.c)
 *     ?Is3D@CMILMatrix@@QEBA_NXZ @ 0x1800DFF1C (-Is3D@CMILMatrix@@QEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800E5C14 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180226640 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::ProducesUniformZ<1>(__int64 a1)
{
  char v1; // r8
  char v2; // al
  bool result; // al
  char v4; // al
  bool v5; // dl

  v1 = 1;
  v2 = (char)(16 * *(_BYTE *)(a1 + 64)) >> 6;
  if ( v2 )
    return v2 == 1;
  v4 = (char)(4 * *(_BYTE *)(a1 + 65)) >> 6;
  if ( v4 )
  {
    v5 = v4 == 1;
  }
  else
  {
    v5 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                      - 1.0) & _xmm) < 0.000081380211;
    *(_BYTE *)(a1 + 65) ^= (*(_BYTE *)(a1 + 65) ^ (-16 - 32 * v5)) & 0x30;
  }
  if ( !v5
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & _xmm) >= 0.000081380211 )
  {
    v1 = 0;
  }
  result = v1;
  *(_BYTE *)(a1 + 64) ^= (*(_BYTE *)(a1 + 64) ^ (-4 - 8 * v1)) & 0xC;
  return result;
}
