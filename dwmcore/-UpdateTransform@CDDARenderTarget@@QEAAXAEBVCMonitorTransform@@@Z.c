/*
 * XREFs of ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801F687C
 * Callers:
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800C8A5C (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18010A5AC (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1801F627C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C9D98 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5890 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDDARenderTarget::UpdateTransform(CDDARenderTarget *this, const struct CMonitorTransform *a2)
{
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // esi
  float v6; // xmm3_4
  unsigned __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned __int64 v11; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v13[84]; // [rsp+40h] [rbp-78h] BYREF
  int v14; // [rsp+94h] [rbp-24h]

  v12 = 0LL;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 19);
  v5 = *((_DWORD *)a2 + 11);
  if ( v3 )
  {
    if ( (**v3)(v3, &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa, &v12) >= 0 )
    {
      memset_0(v13, 0, 0x60uLL);
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 56LL))(v12, v13) >= 0 )
        v5 = v14;
    }
  }
  v6 = *(float *)a2;
  v11 = 0LL;
  CMonitorTransform::Initialize(
    (__int64)this + 200,
    (int *)&v11,
    (const struct CMonitorTransform *)((char *)a2 + 4),
    v6,
    v5,
    0LL);
  v7 = *(_QWORD *)((char *)this + 236);
  v8 = *((_DWORD *)this + 61) - 2;
  v11 = v7;
  if ( (v8 & 0xFFFFFFFD) != 0 )
  {
    v9 = HIDWORD(v11);
    v10 = v11;
  }
  else
  {
    v9 = v11;
    v10 = HIDWORD(v11);
    v11 = __PAIR64__(v11, HIDWORD(v11));
    v7 = v11;
  }
  if ( v10 != *((_DWORD *)this + 26) || v9 != *((_DWORD *)this + 27) )
  {
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset((__int64 *)this + 20);
    *((_QWORD *)this + 13) = v7;
  }
  *((_BYTE *)this + 141) = 1;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
}
