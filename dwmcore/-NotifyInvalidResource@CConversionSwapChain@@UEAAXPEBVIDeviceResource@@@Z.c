void __fastcall CConversionSwapChain::NotifyInvalidResource(
        CConversionSwapChain *this,
        const struct IDeviceResource *a2)
{
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)this + 20);
  CLegacySwapChain::NotifyInvalidResource(this, a2);
}
