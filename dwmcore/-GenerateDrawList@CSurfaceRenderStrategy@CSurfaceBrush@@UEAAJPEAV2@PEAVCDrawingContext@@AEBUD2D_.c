/*
 * XREFs of ?GenerateDrawList@CSurfaceRenderStrategy@CSurfaceBrush@@UEAAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F74E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::CSurfaceRenderStrategy::GenerateDrawList(
        CSurfaceBrush::CSurfaceRenderStrategy *this,
        struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        struct CDrawListCache *a5)
{
  return CBrush::GenerateDrawList(a2, a3, a4, a5);
}
