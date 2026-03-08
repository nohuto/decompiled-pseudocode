/*
 * XREFs of ?SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@_N@Z @ 0x180034F1C
 * Callers:
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034D74 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18003424C (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CScratchRenderTargetBitmap::SetPurpose(
        CScratchRenderTargetBitmap *this,
        const struct CResourceTag *a2,
        char a3)
{
  __int64 v4; // rcx
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD)); // rcx
  __int64 v8; // rax
  __int64 (__fastcall ***v9)(_QWORD); // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD)))(*(int *)(*(_QWORD *)(v4 + 8) + 4LL)
                                                                                 + v4
                                                                                 + 8);
    if ( (**v7)(v7, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v9) >= 0 )
    {
      v8 = (**v9)(v9);
      (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v8 + 40LL))(
        v8,
        &WKPDID_D3DDebugObjectName,
        *((unsigned int *)a2 + 2),
        *(_QWORD *)a2);
    }
  }
  if ( *((_BYTE *)this + 177) != a3 )
  {
    *((_BYTE *)this + 177) = a3;
    *((_BYTE *)this + 144) = a3;
    CRenderTargetBitmap::ResetBitmapCache(this);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v9);
}
