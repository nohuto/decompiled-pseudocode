/*
 * XREFs of ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001CEC0
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800951C0 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x1800B45F0 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800B45F0.c)
 */

int __fastcall CRenderData::DrawImageResource_FillMode(
        CRenderData *a1,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        struct CImageSource *a4,
        struct D2D_RECT_F *a5,
        float a6)
{
  struct D2D_RECT_F v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = *a5;
  return CRenderData::DrawImageResource_FillMode(a1, a2, a3, a4, 0LL, &v7, a6);
}
