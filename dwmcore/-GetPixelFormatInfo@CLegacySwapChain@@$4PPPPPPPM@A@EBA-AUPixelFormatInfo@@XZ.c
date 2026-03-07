__int64 __fastcall CLegacySwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CLegacySwapChain::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
