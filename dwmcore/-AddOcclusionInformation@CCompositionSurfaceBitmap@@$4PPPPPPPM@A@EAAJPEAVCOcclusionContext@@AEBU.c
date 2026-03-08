/*
 * XREFs of ?AddOcclusionInformation@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180117C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddOcclusionInformation(
        __int64 a1,
        struct COcclusionContext *a2,
        struct D2D_SIZE_F *a3)
{
  return CCompositionSurfaceBitmap::AddOcclusionInformation(
           (CCompositionSurfaceBitmap *)(a1 - *(int *)(a1 - 4)),
           a2,
           a3);
}
