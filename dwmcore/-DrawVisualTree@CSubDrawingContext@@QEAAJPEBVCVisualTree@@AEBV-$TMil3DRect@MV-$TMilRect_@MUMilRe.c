/*
 * XREFs of ?DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEBVCOcclusionContext@@@Z @ 0x1800211E0
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180021010 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x180021318 (-Initialize@CSubDrawingContext@@AEAAJXZ.c)
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x180021404 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?EndFrame@CSubDrawingContext@@AEAAX_N@Z @ 0x1800217DC (-EndFrame@CSubDrawingContext@@AEAAX_N@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSubDrawingContext::DrawVisualTree(
        CDrawingContext **this,
        struct CVisualTree *a2,
        __int64 a3,
        const struct CMILMatrix *a4)
{
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx

  if ( this[1] || (v7 = CSubDrawingContext::Initialize((CSubDrawingContext *)this), v9 = v7, v7 >= 0) )
  {
    v10 = CSubDrawingContext::BeginFrame((CSubDrawingContext *)this, a4);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x26u, 0LL);
    }
    else
    {
      v12 = CDrawingContext::DrawVisualTree(this[1], a2, 0, *((_BYTE *)*this + 8050), 0LL);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x31u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x23u, 0LL);
  }
  CSubDrawingContext::EndFrame((CSubDrawingContext *)this, v9 < 0);
  return (unsigned int)v9;
}
