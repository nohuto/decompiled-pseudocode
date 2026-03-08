/*
 * XREFs of ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x18003843C
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000A4C4 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z @ 0x180013F6C (-AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x180037E34 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A380 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093070 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

struct CBackdropVisualImage *__fastcall CVisual::GetBackdropVisualImage(
        CVisual *this,
        const struct CVisualTreePath *a2)
{
  struct CBackdropVisualImage *result; // rax

  result = CVisual::FindTreeData(this, *(const struct CVisualTree **)(*((_QWORD *)a2 + 1) - 8LL));
  if ( result )
    return CTreeData::GetBackdropVisualImage(result, a2);
  return result;
}
