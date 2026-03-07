__int64 __fastcall CCompSwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CCompSwapChain::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
