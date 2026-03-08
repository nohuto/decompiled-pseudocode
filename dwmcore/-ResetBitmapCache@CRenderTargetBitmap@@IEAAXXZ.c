/*
 * XREFs of ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18003424C
 * Callers:
 *     ?SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@_N@Z @ 0x180034F1C (-SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@_N@Z.c)
 *     ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x180035670 (-SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800356D0 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180035750 (-SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800357D0 (-SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 *     ?SetProtected@CRenderTargetBitmap@@UEAAX_N@Z @ 0x1800F8140 (-SetProtected@CRenderTargetBitmap@@UEAAX_N@Z.c)
 *     ?SetProtected@CStereoRenderTargetBitmap@@UEAAX_N@Z @ 0x1802B2850 (-SetProtected@CStereoRenderTargetBitmap@@UEAAX_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180034308 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::ResetBitmapCache(CRenderTargetBitmap *this)
{
  __int64 v1; // r8
  struct ID2DBitmapCacheSource *v2; // rdx
  void (__fastcall ***v4)(_QWORD, GUID *, struct ID2DBitmapCacheSource **); // rcx
  struct ID2DBitmapCacheSource *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 17);
  v2 = 0LL;
  v5 = 0LL;
  if ( v1 && !*((_BYTE *)this + 144) )
  {
    v4 = (void (__fastcall ***)(_QWORD, GUID *, struct ID2DBitmapCacheSource **))(v1
                                                                                + 8
                                                                                + *(int *)(*(_QWORD *)(v1 + 8) + 4LL));
    (**v4)(v4, &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3, &v5);
    v2 = v5;
  }
  CD2DBitmapCache::InitializeCache(this, v2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v5);
}
