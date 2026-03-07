__int64 __fastcall CSurfaceBrush::CSurfaceRenderStrategy::Draw(
        CSurfaceBrush::CSurfaceRenderStrategy *this,
        struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        struct CDrawListCache *a5)
{
  return CBrush::Draw((struct CSurfaceBrush *)((char *)a2 + 112), a3, a4, a5);
}
