/*
 * XREFs of ?GetTransparentBlackEffectInput@CDrawingContext@@QEBA?AUEffectInput@@AEBUD2D_SIZE_F@@@Z @ 0x1801D2CE0
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000A4C4 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093070 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800938E0 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801D3B28 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 */

__int64 __fastcall CDrawingContext::GetTransparentBlackEffectInput(
        CDrawingContext *a1,
        __int64 a2,
        const struct D2D_SIZE_F *a3)
{
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 48) = 0LL;
  EffectInput::Reset((struct EffectInput *)a2);
  CDrawingContext::SetEffectInputToTransparentBlack(a1, a3, (struct EffectInput *)a2);
  return a2;
}
