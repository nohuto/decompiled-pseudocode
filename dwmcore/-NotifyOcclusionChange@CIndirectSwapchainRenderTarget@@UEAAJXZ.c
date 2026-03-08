/*
 * XREFs of ?NotifyOcclusionChange@CIndirectSwapchainRenderTarget@@UEAAJXZ @ 0x1801EC000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::NotifyOcclusionChange(CIndirectSwapchainRenderTarget *this)
{
  *((_BYTE *)this + 65) = 1;
  return CIndirectSwapchainRenderTarget::EnsureMetadataBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 1864));
}
