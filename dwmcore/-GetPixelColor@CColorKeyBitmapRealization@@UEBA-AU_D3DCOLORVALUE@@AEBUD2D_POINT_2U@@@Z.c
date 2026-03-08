/*
 * XREFs of ?GetPixelColor@CColorKeyBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x1802ACE40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180092758 (--0-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealizatio.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _D3DCOLORVALUE *__fastcall CColorKeyBitmapRealization::GetPixelColor(
        CColorKeyBitmapRealization *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct D2D_POINT_2U *a3)
{
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  *(_OWORD *)&retstr->r = 0LL;
  wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
    &v8,
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL));
  if ( v8 )
  {
    v7 = 0LL;
    v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v8 + 8) + 4LL) + v8 + 8);
    if ( (**v5)(v5, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v7) >= 0 )
      *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)(*(__int64 (__fastcall **)(__int64, _BYTE *, const struct D2D_POINT_2U *))(*(_QWORD *)v7 + 24LL))(
                                                                         v7,
                                                                         v9,
                                                                         a3);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v7);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v8);
  return retstr;
}
