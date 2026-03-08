/*
 * XREFs of ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@@@Z @ 0x1800E8D3C
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004CC2C (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x180087264 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@AEBVCBackdropVisualImageKey@@_N@Z @ 0x1801EE758 (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@AEBVCBackdropVisualImageKey@@_N@Z.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x1801F3E14 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@AEBVCBackdropVisualImageKey@@_N@Z @ 0x1800E8D7C (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@AEBVCBackdropVisualImageKey@@_N@Z.c)
 */

struct COcclusionInfo *__fastcall CVisual::GetOcclusionInfo(
        CVisual *this,
        const struct CVisualTree *a2,
        const struct CBackdropVisualImageKey *a3)
{
  __int64 v4; // rbx
  __int64 **TreeData; // rax

  v4 = 0LL;
  TreeData = CVisual::FindTreeData(this, a2);
  if ( TreeData )
    return CTreeData::GetOcclusionInfo((CTreeData *)TreeData, a3, 0);
  return (struct COcclusionInfo *)v4;
}
