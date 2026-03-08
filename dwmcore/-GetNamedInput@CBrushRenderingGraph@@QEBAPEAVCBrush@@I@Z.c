/*
 * XREFs of ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x18002ECBC
 * Callers:
 *     ?GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingGraph@@@Z @ 0x18002D55C (-GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingG.c)
 *     ?HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18002D614 (-HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18002D6BC (-HasBlurredWallpaperBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18002E744 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?IsBlurredWallpaperBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x18002EBD8 (-IsBlurredWallpaperBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z.c)
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x18002EC24 (-IsWindowBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x18002EC70 (-IsBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093070 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

struct CBrush *__fastcall CBrushRenderingGraph::GetNamedInput(CBrushRenderingGraph *this, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
  return *(struct CBrush **)(*((_QWORD *)this + 2) + 24LL * a2);
}
