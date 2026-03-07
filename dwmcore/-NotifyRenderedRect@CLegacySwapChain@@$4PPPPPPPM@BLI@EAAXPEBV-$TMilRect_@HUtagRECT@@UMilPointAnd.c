void __fastcall CLegacySwapChain::NotifyRenderedRect(__int64 a1, __int64 a2)
{
  CLegacySwapChain::NotifyRenderedRect(a1 - *(int *)(a1 - 4) - 440, a2);
}
