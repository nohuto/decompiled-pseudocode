struct _LUID __fastcall CLegacySwapChain::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CLegacySwapChain::GetAdapterLuid((CLegacySwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}
