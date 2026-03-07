_QWORD *__fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rcx

  v5 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*a3 - *a1) >> 5);
  v8 = detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         v5,
         1LL);
  COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v8, a4);
  *a2 = *a1 + 224 * v5;
  v9 = *(std::_Ref_count_base **)(a4 + 168);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(a4 + 16));
  return a2;
}
