__int64 __fastcall CLegacySwapChain::Present(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  return CLegacySwapChain::Present((CD3DDevice **)(a1 - *(int *)(a1 - 4) - 432), a2, a3, a4, a5);
}
