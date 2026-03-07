void __fastcall CConversionSwapChain::~CConversionSwapChain(void **this)
{
  FastRegion::CRegion::FreeMemory(this + 84);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)(this + 47));
  CLegacySwapChain::~CLegacySwapChain((CLegacySwapChain *)this);
}
