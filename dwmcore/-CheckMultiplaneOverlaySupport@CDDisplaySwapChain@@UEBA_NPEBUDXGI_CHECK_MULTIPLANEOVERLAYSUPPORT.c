__int64 __fastcall CDDisplaySwapChain::CheckMultiplaneOverlaySupport(
        CDDisplaySwapChain *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        __int64 a3,
        bool *a4)
{
  return CDDisplaySwapChain::CheckMultiplaneOverlaySupportInternal(this, a2, a3, 1LL, a4);
}
