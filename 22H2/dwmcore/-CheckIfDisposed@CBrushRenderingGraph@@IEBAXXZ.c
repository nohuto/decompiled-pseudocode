/*
 * XREFs of ?CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ @ 0x180030D1C
 * Callers:
 *     ?GetSurfaceTransform@CBrushRenderingGraph@@IEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x180030CD0 (-GetSurfaceTransform@CBrushRenderingGraph@@IEBAPEBUD2D_MATRIX_3X2_F@@I@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093240 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBrushRenderingGraph::CheckIfDisposed(CBrushRenderingGraph *this)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
}
