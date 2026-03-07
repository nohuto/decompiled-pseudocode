void __fastcall CD2DFactory::~CD2DFactory(CD2DFactory *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v2 + 192LL))(v2, &CLSID_Mesh2DEffect);
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x5Du, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this);
}
