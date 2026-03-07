void __fastcall CCompositionSpotLight::~CCompositionSpotLight(CCompositionSpotLight *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 264);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 32);
  CCompositionLight::~CCompositionLight(this);
}
