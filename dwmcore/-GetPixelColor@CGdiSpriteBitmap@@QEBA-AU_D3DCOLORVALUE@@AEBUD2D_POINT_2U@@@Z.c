/*
 * XREFs of ?GetPixelColor@CGdiSpriteBitmap@@QEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x18012DFF4
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800DECD0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _D3DCOLORVALUE *__fastcall CGdiSpriteBitmap::GetPixelColor(
        CGdiSpriteBitmap *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct D2D_POINT_2U *a3)
{
  __int64 v5; // rdx
  void (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[16]; // [rsp+28h] [rbp-20h] BYREF

  *(_OWORD *)&retstr->r = 0LL;
  if ( *((_QWORD *)this + 44) )
  {
    v5 = *((_QWORD *)this + 55);
    if ( v5 )
    {
      v8 = 0LL;
      v6 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))(v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL));
      (**v6)(v6, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v8);
      *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)(*(__int64 (__fastcall **)(__int64, _BYTE *, const struct D2D_POINT_2U *))(*(_QWORD *)v8 + 24LL))(
                                                                         v8,
                                                                         v9,
                                                                         a3);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
    }
  }
  return retstr;
}
