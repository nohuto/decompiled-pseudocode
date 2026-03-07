struct _D3DCOLORVALUE *__fastcall CSectionBitmapRealization::GetPixelColor(
        CSectionBitmapRealization *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct D2D_POINT_2U *a3)
{
  __int64 v5; // rdx
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[16]; // [rsp+28h] [rbp-20h] BYREF

  v8 = 0LL;
  *(_OWORD *)&retstr->r = 0LL;
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL));
    if ( (**v6)(v6, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v8) >= 0 )
      *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)(*(__int64 (__fastcall **)(__int64, _BYTE *, const struct D2D_POINT_2U *))(*(_QWORD *)v8 + 24LL))(
                                                                         v8,
                                                                         v9,
                                                                         a3);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
  return retstr;
}
