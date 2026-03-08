/*
 * XREFs of ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180257520
 * Callers:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1800B7A28 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?DisableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z @ 0x180257590 (-DisableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1802575E8 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x180258390 (-ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18025883C (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::DisableDirectFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        bool a2)
{
  CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(this, a2);
  CGlobalCompositionSurfaceInfo::CBindInfo::ResetCustomDuration(this);
  if ( *((_BYTE *)this + 192) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip(this);
  NtSetCompositionSurfaceDirectFlipState(*(_QWORD *)(*(_QWORD *)this + 32LL), (char *)this + 24, 0LL, 0LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 25);
  *((_BYTE *)this + 197) = 0;
}
