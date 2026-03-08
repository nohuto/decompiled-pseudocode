/*
 * XREFs of ?NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18029EED0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CConversionSwapChain::NotifyInvalidResource(
        CConversionSwapChain *this,
        const struct IDeviceResource *a2)
{
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)this + 20);
  CLegacySwapChain::NotifyInvalidResource(this, a2);
}
