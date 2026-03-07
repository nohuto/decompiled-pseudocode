void __fastcall CLinearGradientLegacyMilBrush::~CLinearGradientLegacyMilBrush(CLinearGradientLegacyMilBrush *this)
{
  __int64 v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CLinearGradientLegacyMilBrush::`vftable';
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
    CPtrArrayBase::Remove((CPtrArrayBase *)(v2 + 24), (unsigned __int64 *)this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 24);
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, 8 * ((__int64)(*((_QWORD *)this + 16) - (_QWORD)v3) >> 3));
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>::~CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>((struct CResource **)this);
}
