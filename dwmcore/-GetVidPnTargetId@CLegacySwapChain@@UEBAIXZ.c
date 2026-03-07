__int64 __fastcall CLegacySwapChain::GetVidPnTargetId(CLegacySwapChain *this)
{
  (*(void (__fastcall **)(CLegacySwapChain *))(*(_QWORD *)this + 256LL))(this);
  return *((unsigned int *)this + 31);
}
