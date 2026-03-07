_QWORD *__fastcall std::_Swap_ranges_unchecked<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>,detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v10; // r9
  _BYTE v11[16]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v12[19]; // [rsp+30h] [rbp-108h] BYREF
  std::_Ref_count_base *v13; // [rsp+C8h] [rbp-70h]

  v4 = *a4;
  while ( *a2 != *a3 )
  {
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v11, *a2);
    COverlayContext::OverlayPlaneInfo::operator=(v10, v4);
    COverlayContext::OverlayPlaneInfo::operator=(v4, v11);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v12);
    *a2 += 224LL;
    *a4 += 224LL;
    v4 = *a4;
  }
  *a1 = v4;
  return a1;
}
