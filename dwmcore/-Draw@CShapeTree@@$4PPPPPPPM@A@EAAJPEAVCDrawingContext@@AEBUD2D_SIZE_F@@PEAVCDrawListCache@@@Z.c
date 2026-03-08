/*
 * XREFs of ?Draw@CShapeTree@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShapeTree::Draw(
        __int64 a1,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return CShapeTree::Draw((CShapeTree *)(a1 - *(int *)(a1 - 4)), a2, a3, a4);
}
