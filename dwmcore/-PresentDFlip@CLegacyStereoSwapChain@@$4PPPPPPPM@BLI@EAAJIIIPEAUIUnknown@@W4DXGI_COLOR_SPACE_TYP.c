__int64 __fastcall CLegacyStereoSwapChain::PresentDFlip(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  return CLegacyStereoSwapChain::PresentDFlip((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 440), a2, a3, a5);
}
