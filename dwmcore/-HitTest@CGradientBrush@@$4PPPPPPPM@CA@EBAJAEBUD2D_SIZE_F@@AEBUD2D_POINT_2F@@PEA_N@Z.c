/*
 * XREFs of ?HitTest@CGradientBrush@@$4PPPPPPPM@CA@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801187D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CGradientBrush::HitTest(
        __int64 a1,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  return CGradientBrush::HitTest((CGradientBrush *)(a1 - *(int *)(a1 - 4) - 32), a2, a3, a4);
}
