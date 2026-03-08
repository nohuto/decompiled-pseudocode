/*
 * XREFs of ?Draw@CRedirectedVisualContent@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRedirectedVisualContent::Draw(
        __int64 a1,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return CRedirectedVisualContent::Draw((CRedirectedVisualContent *)(a1 - *(int *)(a1 - 4)), a2, a3, a4);
}
