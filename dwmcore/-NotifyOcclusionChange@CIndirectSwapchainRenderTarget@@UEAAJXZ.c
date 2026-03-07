__int64 __fastcall CIndirectSwapchainRenderTarget::NotifyOcclusionChange(CIndirectSwapchainRenderTarget *this)
{
  *((_BYTE *)this + 65) = 1;
  return CIndirectSwapchainRenderTarget::EnsureMetadataBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 1864));
}
