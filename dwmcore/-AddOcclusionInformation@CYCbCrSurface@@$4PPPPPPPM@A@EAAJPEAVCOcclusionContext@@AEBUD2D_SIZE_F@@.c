/*
 * XREFs of ?AddOcclusionInformation@CYCbCrSurface@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180117CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CYCbCrSurface::AddOcclusionInformation(
        __int64 a1,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  return CYCbCrSurface::AddOcclusionInformation((CYCbCrSurface *)(a1 - *(int *)(a1 - 4)), a2, a3);
}
