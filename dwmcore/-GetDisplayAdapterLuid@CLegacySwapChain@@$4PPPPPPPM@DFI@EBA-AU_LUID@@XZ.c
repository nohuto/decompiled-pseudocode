struct _LUID __fastcall CLegacySwapChain::GetDisplayAdapterLuid(__int64 a1, _QWORD *a2)
{
  return COverlaySwapChainBase::GetDisplayAdapterLuid((COverlaySwapChainBase *)(a1 - *(int *)(a1 - 4) - 856), a2);
}
