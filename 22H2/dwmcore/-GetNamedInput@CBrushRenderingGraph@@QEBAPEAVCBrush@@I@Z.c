/*
 * XREFs of ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x18002EDAC
 * Callers:
 *     ?GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingGraph@@@Z @ 0x18002D64C (-GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingG.c)
 *     ?HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18002D704 (-HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18002D7AC (-HasBlurredWallpaperBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18002E834 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?IsBlurredWallpaperBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x18002ECC8 (-IsBlurredWallpaperBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z.c)
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x18002ED14 (-IsWindowBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x18002ED60 (-IsBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093240 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

struct CBrush *__fastcall CBrushRenderingGraph::GetNamedInput(CBrushRenderingGraph *this, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
  return *(struct CBrush **)(*((_QWORD *)this + 2) + 24LL * a2);
}
