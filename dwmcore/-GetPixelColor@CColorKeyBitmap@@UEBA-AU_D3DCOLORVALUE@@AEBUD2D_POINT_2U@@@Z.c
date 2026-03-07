struct _D3DCOLORVALUE *__fastcall CColorKeyBitmap::GetPixelColor(
        CColorKeyBitmap *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct D2D_POINT_2U *a3)
{
  __int64 v3; // r9
  void (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 1);
  v8 = 0LL;
  v6 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 4LL));
  (**v6)(v6, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v8);
  (*(void (__fastcall **)(__int64, struct _D3DCOLORVALUE *, const struct D2D_POINT_2U *))(*(_QWORD *)v8 + 24LL))(
    v8,
    retstr,
    a3);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
  return retstr;
}
