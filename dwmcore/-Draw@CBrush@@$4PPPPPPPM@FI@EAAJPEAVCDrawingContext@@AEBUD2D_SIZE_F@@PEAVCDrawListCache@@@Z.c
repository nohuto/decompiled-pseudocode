/*
 * XREFs of ?Draw@CBrush@@$4PPPPPPPM@FI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119D70
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
  return CBrush::Draw((CBrush *)(a1 - *(int *)(a1 - 4) - 88), a2, a3, a4);
}
