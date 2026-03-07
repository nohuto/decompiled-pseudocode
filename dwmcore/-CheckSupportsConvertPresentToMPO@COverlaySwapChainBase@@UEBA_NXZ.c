bool __fastcall COverlaySwapChainBase::CheckSupportsConvertPresentToMPO(COverlaySwapChainBase *this)
{
  return *((_DWORD *)this + 52) >= 2;
}
