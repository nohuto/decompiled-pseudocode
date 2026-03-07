bool __fastcall CConversionSwapChain::CheckMultiplaneOverlaySupport(
        __int64 a1,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  return CConversionSwapChain::CheckMultiplaneOverlaySupport(
           (CConversionSwapChain *)(a1 - *(int *)(a1 - 4) - 856),
           a2,
           a3,
           a4);
}
