__int64 __fastcall CLegacyStereoSwapChain::Present(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  return CLegacyStereoSwapChain::Present((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 440), a2, a3, a5);
}
