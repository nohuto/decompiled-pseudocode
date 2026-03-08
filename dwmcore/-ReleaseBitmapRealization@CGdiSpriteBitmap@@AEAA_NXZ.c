/*
 * XREFs of ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800A8EE0
 * Callers:
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800A8E8C (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x1800AA18C (-SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z.c)
 *     ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18021A840 (-NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CGdiSpriteBitmap::ReleaseBitmapRealization(CGdiSpriteBitmap *this)
{
  char *v1; // rdi
  bool v2; // si
  __int64 v3; // rdx
  __int64 *v5; // rbp
  __int64 *i; // rdi
  bool result; // al
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 440;
  v2 = 0;
  v3 = *((_QWORD *)this + 55);
  if ( v3 )
  {
    v9 = 0LL;
    v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 4LL));
    if ( (**v8)(v8, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v9) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 48LL))(
        v9,
        ((unsigned __int64)this + 112) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v1);
    *((_QWORD *)this + 45) = 0LL;
    v2 = 1;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v9);
  }
  v5 = (__int64 *)*((_QWORD *)this + 57);
  for ( i = (__int64 *)*((_QWORD *)this + 56); i != v5; ++i )
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(i);
  result = v2;
  *((_QWORD *)this + 57) = *((_QWORD *)this + 56);
  return result;
}
