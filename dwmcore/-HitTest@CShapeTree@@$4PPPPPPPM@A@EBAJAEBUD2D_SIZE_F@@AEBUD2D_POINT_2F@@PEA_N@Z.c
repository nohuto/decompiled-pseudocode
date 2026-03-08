/*
 * XREFs of ?HitTest@CShapeTree@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18011A1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CShapeTree::HitTest(__int64 a1, const struct D2D_SIZE_F *a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  return CShapeTree::HitTest((CShapeTree *)(a1 - *(int *)(a1 - 4)), a2, a3, a4);
}
