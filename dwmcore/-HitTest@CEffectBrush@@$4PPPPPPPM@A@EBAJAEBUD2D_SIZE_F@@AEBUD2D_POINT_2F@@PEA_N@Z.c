/*
 * XREFs of ?HitTest@CEffectBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180119DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CEffectBrush::HitTest(__int64 a1, const struct D2D_SIZE_F *a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  return CEffectBrush::HitTest((CEffectBrush *)(a1 - *(int *)(a1 - 4)), a2, a3, a4);
}
