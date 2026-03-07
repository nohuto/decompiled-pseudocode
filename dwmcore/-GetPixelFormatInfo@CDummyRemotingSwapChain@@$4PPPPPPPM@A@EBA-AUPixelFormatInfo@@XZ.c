_DWORD *__fastcall CDummyRemotingSwapChain::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CDummyRemotingSwapChain::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
