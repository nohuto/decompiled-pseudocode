/*
 * XREFs of ?HitTest@CYCbCrSurface@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180118870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CYCbCrSurface::HitTest(
        __int64 a1,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  return CYCbCrSurface::HitTest((CYCbCrSurface *)(a1 - *(int *)(a1 - 4)), a2, a3, a4);
}
