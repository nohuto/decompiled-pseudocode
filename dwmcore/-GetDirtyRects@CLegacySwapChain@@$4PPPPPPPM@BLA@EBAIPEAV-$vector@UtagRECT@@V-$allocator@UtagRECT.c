__int64 __fastcall CLegacySwapChain::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  return COverlaySwapChainBase::GetDirtyRects(a1 - *(int *)(a1 - 4) - 432, a2);
}
