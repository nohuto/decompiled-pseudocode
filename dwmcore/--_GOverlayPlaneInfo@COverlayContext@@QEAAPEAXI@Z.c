COverlayContext::OverlayPlaneInfo *__fastcall COverlayContext::OverlayPlaneInfo::`scalar deleting destructor'(
        COverlayContext::OverlayPlaneInfo *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 21);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
  return this;
}
