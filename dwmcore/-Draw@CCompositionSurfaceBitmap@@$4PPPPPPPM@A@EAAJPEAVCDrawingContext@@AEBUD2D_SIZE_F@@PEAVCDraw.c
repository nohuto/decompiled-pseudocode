/*
 * XREFs of ?Draw@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180118110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::Draw(
        __int64 a1,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return CCompositionSurfaceBitmap::Draw((CCompositionSurfaceBitmap *)(a1 - *(int *)(a1 - 4)), a2, a3, a4);
}
