bool __fastcall CLegacySwapChain::IsVBlankBoostSupported(CLegacySwapChain *this)
{
  return *((_DWORD *)this + 78) != 1;
}
