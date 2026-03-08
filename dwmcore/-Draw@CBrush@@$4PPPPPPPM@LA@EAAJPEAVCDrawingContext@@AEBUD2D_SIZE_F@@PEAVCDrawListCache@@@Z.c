/*
 * XREFs of ?Draw@CBrush@@$4PPPPPPPM@LA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801180F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrush::Draw(
        __int64 a1,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return CBrush::Draw((CBrush *)(a1 - *(int *)(a1 - 4) - 176), a2, a3, a4);
}
