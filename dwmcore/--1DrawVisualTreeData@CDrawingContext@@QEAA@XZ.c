/*
 * XREFs of ??1DrawVisualTreeData@CDrawingContext@@QEAA@XZ @ 0x18008A84C
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::DrawVisualTreeData::~DrawVisualTreeData(
        CDrawingContext::DrawVisualTreeData *this,
        unsigned int a2)
{
  CVisualTreePath *v2; // rcx

  v2 = (CVisualTreePath *)*((_QWORD *)this + 4);
  if ( v2 )
    CVisualTreePath::`scalar deleting destructor'(v2, a2);
}
