/*
 * XREFs of ??0CCpuClip@@QEAA@XZ @ 0x1800B5884
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800102A0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B4C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800DB8E4 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801F9678 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180221EB0 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntialiasSinkContext@@@Z @ 0x1800DB9F4 (-Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntia.c)
 */

CCpuClip *__fastcall CCpuClip::CCpuClip(CCpuClip *this)
{
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 88) = 0;
  CCpuClip::Initialize(this, 0LL, 0LL, D2D1_ANTIALIAS_MODE_ALIASED, 0, 0LL);
  return this;
}
