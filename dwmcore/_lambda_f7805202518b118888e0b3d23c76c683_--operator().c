/*
 * XREFs of _lambda_f7805202518b118888e0b3d23c76c683_::operator() @ 0x1801E958C
 * Callers:
 *     CComposition::ForEachCursorVisualReference__lambda_f7805202518b118888e0b3d23c76c683___ @ 0x1801E8D88 (CComposition--ForEachCursorVisualReference__lambda_f7805202518b118888e0b3d23c76c683___.c)
 * Callees:
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800094F0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800148F4 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x18012A454 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall lambda_f7805202518b118888e0b3d23c76c683_::operator()(__int64 a1, CExcludeVisualReference *a2)
{
  unsigned int v3; // ebx
  struct CVisual *Visual; // rsi
  __int128 *Bounds; // rax
  struct CVisualTree *v6; // rdx
  int v7; // eax
  __int64 v8; // rcx

  v3 = 0;
  Visual = CExcludeVisualReference::GetVisual(a2);
  if ( !CVisualTree::_IsInTree(*(const struct CVisualTree **)(*(_QWORD *)a1 + 96LL), (__int64)Visual, 0) )
  {
    if ( CVisualTree::_IsInTree(*(const struct CVisualTree **)(a1 + 16), (__int64)Visual, 0) )
    {
      Bounds = CVisual::GetBounds((__int64)Visual, *(_QWORD *)(a1 + 16));
      v7 = CDrawingContext::DrawVisualTree(*(CDrawingContext **)(a1 + 8), v6, (float *)Bounds, 0LL, 0, 0, Visual);
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x13Cu, 0LL);
    }
  }
  return v3;
}
