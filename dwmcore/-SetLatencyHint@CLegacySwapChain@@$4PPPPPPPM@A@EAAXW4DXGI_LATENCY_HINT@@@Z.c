__int64 __fastcall CLegacySwapChain::SetLatencyHint(__int64 a1)
{
  return CLegacySwapChain::SetLatencyHint(a1 - *(int *)(a1 - 4));
}
