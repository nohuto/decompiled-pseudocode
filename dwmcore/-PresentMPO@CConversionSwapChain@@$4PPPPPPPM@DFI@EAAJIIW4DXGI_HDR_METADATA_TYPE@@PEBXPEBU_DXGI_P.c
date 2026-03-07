__int64 __fastcall CConversionSwapChain::PresentMPO(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        const void *a5,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  return CConversionSwapChain::PresentMPO((CConversionSwapChain *)(a1 - *(int *)(a1 - 4) - 856), a2, a3, a4, a5, a6, a7);
}
