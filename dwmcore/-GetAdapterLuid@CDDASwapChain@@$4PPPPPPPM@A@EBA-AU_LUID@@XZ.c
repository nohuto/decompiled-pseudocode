struct _LUID __fastcall CDDASwapChain::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CDDASwapChain::GetAdapterLuid((CDDASwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}
