/*
 * XREFs of ?GetSurfacePlaneResource@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAJPEAVCCompositionSurfaceInfo@@PEAPEAUIUnknown@@PEAI@Z @ 0x18011B7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetSurfacePlaneResource(
        __int64 a1,
        struct CCompositionSurfaceInfo *a2,
        struct IUnknown **a3,
        unsigned int *a4)
{
  return CLegacySwapChain::GetSurfacePlaneResource((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 432), a2, a3, a4);
}
