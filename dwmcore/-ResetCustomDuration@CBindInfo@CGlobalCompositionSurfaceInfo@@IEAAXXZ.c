/*
 * XREFs of ?ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x180258390
 * Callers:
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180257520 (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1802575E8 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18025779C (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::ResetCustomDuration(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v1; // rcx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 56) )
  {
    *((_DWORD *)this + 56) = 0;
    v1 = *((_QWORD *)this + 25);
    v2 = 0LL;
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v1 + 24LL))(
           v1,
           &GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc,
           &v2) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 80LL))(v2, 0LL, 0LL);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v2);
  }
}
