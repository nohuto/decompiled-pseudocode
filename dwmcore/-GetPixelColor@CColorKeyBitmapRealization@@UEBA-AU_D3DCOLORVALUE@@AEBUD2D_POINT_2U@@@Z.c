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
