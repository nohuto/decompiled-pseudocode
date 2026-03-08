/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x1802AF6A0
 * Callers:
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1802AFE60 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180034308 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x1802940EC (-NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices.c)
 */

void __fastcall CDxHandleBitmapRealization::ReleaseD2DBitmap(CDxHandleBitmapRealization *this)
{
  __int64 *v1; // rdi
  struct Windows::Devices::Display::Core::IDisplaySurface *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v1 = (__int64 *)((char *)this + 384);
  v3 = (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)this + 48);
  if ( v3 )
  {
    CDDisplayManager::NotifyRealizationBitmapReleased(this, v3);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  }
  v4 = *((_QWORD *)this + 47);
  if ( v4 )
  {
    v5 = v4 + 16 + *(int *)(*(_QWORD *)(v4 + 16) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 48LL))(
      v5,
      (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
    v6 = *((_QWORD *)this + 47);
    *((_QWORD *)this + 47) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    CD2DBitmapCache::InitializeCache(this, 0LL);
  }
  CBitmapRealization::InvalidateDecodeBitmap(this, 1);
}
