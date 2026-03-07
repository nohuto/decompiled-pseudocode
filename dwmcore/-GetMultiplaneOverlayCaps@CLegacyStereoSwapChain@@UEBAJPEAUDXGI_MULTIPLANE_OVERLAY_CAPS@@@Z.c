__int64 __fastcall CLegacyStereoSwapChain::GetMultiplaneOverlayCaps(
        CLegacyStereoSwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 10) = 0;
  *(_DWORD *)a2 = 1;
  *((_DWORD *)a2 + 1) = 1;
  return 0LL;
}
