/*
 * XREFs of ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18025779C
 * Callers:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1800B7A28 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x1802577F0 (-DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z.c)
 *     ?PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z @ 0x180258330 (-PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1802575E8 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x180258390 (-ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18025883C (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
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
