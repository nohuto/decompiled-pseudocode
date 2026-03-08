/*
 * XREFs of ?Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEAAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18001BBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::CSurfaceRenderStrategy::Draw(
        CSurfaceBrush::CSurfaceRenderStrategy *this,
        struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        struct CDrawListCache *a5)
{
  return CBrush::Draw((struct CSurfaceBrush *)((char *)a2 + 112), a3, a4, a5);
}
