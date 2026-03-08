/*
 * XREFs of ??$?4U?$default_delete@VCVisualTreePath@@@std@@$0A@@?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180019960
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ??_GCVisualTreePath@@QEAAPEAXI@Z @ 0x1801B329C (--_GCVisualTreePath@@QEAAPEAXI@Z.c)
 */

CVisualTreePath **__fastcall std::unique_ptr<CVisualTreePath>::operator=<std::default_delete<CVisualTreePath>,0>(
        CVisualTreePath **a1,
        CVisualTreePath **a2)
{
  CVisualTreePath *v3; // rax
  CVisualTreePath *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      CVisualTreePath::`scalar deleting destructor'(v4, (unsigned int)a2);
  }
  return a1;
}
