/*
 * XREFs of ??_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z @ 0x180039830
 * Callers:
 *     ??$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdropCache@@0@Z @ 0x1800397F4 (--$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdrop.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

CBlurredBackdropCache::CachedBlur *__fastcall CBlurredBackdropCache::CachedBlur::`scalar deleting destructor'(
        CBlurredBackdropCache::CachedBlur *this)
{
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 40);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 32);
  return this;
}
