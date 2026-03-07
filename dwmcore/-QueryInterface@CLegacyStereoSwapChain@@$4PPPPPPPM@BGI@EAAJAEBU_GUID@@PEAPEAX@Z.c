__int64 __fastcall CLegacyStereoSwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CLegacySwapChain::QueryInterface((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 360), a2, a3);
}
