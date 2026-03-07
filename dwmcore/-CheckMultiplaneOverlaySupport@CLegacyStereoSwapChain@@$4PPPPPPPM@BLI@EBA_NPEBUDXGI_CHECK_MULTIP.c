bool __fastcall CLegacyStereoSwapChain::CheckMultiplaneOverlaySupport(
        __int64 a1,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        __int64 a3,
        bool *a4)
{
  return CLegacyStereoSwapChain::CheckMultiplaneOverlaySupport(
           (CLegacyStereoSwapChain *)(a1 - *(int *)(a1 - 4) - 440),
           a2,
           a3,
           a4);
}
