/*
 * XREFs of ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800C6914
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180069D3C (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800C696C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800C696C.c)
 */

int __fastcall CRenderData::DrawImageResource_FillMode(
        CRenderData *a1,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        bool a4,
        struct CImageSource *a5,
        struct D2D_RECT_F *a6,
        float a7)
{
  struct D2D_RECT_F v8; // [rsp+40h] [rbp-18h] BYREF

  v8 = *a6;
  return CRenderData::DrawImageResource_FillMode(a1, a2, a3, a4, a5, 0LL, &v8, a7);
}
