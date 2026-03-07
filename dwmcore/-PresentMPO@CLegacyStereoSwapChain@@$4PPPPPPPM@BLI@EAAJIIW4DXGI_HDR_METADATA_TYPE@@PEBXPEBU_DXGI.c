__int64 __fastcall CLegacyStereoSwapChain::PresentMPO(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        enum DXGI_HDR_METADATA_TYPE a4)
{
  return CLegacyStereoSwapChain::PresentMPO((CLegacyStereoSwapChain *)(a1 - *(int *)(a1 - 4) - 440), a2, a3, a4);
}
