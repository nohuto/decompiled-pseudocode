/*
 * XREFs of _lambda_4d6035b5fdecd7bb0589f89584db9c3e_::operator() @ 0x1801E94EC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4d6035b5fdecd7bb0589f89584db9c3e__long_CCursorVisual___::_Do_call @ 0x1801EB080 (std--_Func_impl_no_alloc__lambda_4d6035b5fdecd7bb0589f89584db9c3e__long_CCursorVisual___--_Do_ca.c)
 * Callees:
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800094F0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800148F4 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall lambda_4d6035b5fdecd7bb0589f89584db9c3e_::operator()(__int64 a1, struct CVisual *a2)
{
  unsigned int v4; // ebx
  __int128 *Bounds; // rax
  struct CVisualTree *v6; // rdx
  int v7; // eax
  __int64 v8; // rcx

  v4 = 0;
  if ( !CVisualTree::_IsInTree(*(const struct CVisualTree **)(*(_QWORD *)a1 + 96LL), (__int64)a2, 0) )
  {
    if ( CVisualTree::_IsInTree(*(const struct CVisualTree **)(a1 + 16), (__int64)a2, 0) )
    {
      Bounds = CVisual::GetBounds((__int64)a2, *(_QWORD *)(a1 + 16));
      v7 = CDrawingContext::DrawVisualTree(*(CDrawingContext **)(a1 + 8), v6, (float *)Bounds, 0LL, 0, 0, a2);
      v4 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x159u, 0LL);
    }
  }
  return v4;
}
