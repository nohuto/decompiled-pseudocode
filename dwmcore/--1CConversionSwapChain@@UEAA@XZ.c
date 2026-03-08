/*
 * XREFs of ??1CConversionSwapChain@@UEAA@XZ @ 0x18029D424
 * Callers:
 *     ??_ECConversionSwapChain@@UEAAPEAXI@Z @ 0x18029D458 (--_ECConversionSwapChain@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CConversionSwapChain::~CConversionSwapChain(void **this)
{
  FastRegion::CRegion::FreeMemory(this + 84);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)(this + 47));
  CLegacySwapChain::~CLegacySwapChain((CLegacySwapChain *)this);
}
