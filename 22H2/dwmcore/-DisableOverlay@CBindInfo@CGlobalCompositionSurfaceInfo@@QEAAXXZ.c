/*
 * XREFs of ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18025AE5C
 * Callers:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1800B7F08 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x18025AEB0 (-DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z.c)
 *     ?PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z @ 0x18025B9F0 (-PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180100300 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18025ACA8 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x18025BA50 (-ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18025BEFC (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(this, 0);
  CGlobalCompositionSurfaceInfo::CBindInfo::ResetCustomDuration(this);
  if ( *((_BYTE *)this + 192) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip(this);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 25);
  *((_BYTE *)this + 198) = 0;
}
