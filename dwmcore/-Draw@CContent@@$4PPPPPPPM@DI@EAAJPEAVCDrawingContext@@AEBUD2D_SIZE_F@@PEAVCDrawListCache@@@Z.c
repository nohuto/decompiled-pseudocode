/*
 * XREFs of ?Draw@CContent@@$4PPPPPPPM@DI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180118130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CContent::Draw(
        __int64 a1,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return CContent::Draw((CContent *)(a1 - *(int *)(a1 - 4) - 56), a2, a3, a4);
}
