__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap_generic<detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v13; // [rsp+50h] [rbp+28h] BYREF
  __int64 v14; // [rsp+58h] [rbp+30h] BYREF
  __int64 v15; // [rsp+60h] [rbp+38h] BYREF
  __int64 v16; // [rsp+68h] [rbp+40h] BYREF

  v2 = a2[1];
  v4 = *a2;
  v6 = v2 - *a2;
  v7 = a1[1];
  v8 = *a1;
  if ( 0x6DB6DB6DB6DB6DB7LL * ((v7 - *a1) >> 5) > (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v6 >> 5)) )
  {
    v13 = *a1;
    v14 = v2;
    v15 = v4;
    std::_Swap_ranges_unchecked<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>,detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>(
      &v16,
      &v15,
      &v14,
      &v13);
    v9 = v16;
    v13 = a1[1];
    v14 = v16;
    std::move<std::move_iterator<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>,detail::back_insert_iterator_unchecked<detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>>>(
      &v15,
      &v14,
      &v13,
      a2);
    v10 = a1[1];
    v11 = a1;
  }
  else
  {
    v13 = v4;
    v15 = v8;
    v14 = v7;
    std::_Swap_ranges_unchecked<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>,detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>(
      &v16,
      &v15,
      &v14,
      &v13);
    v9 = v16;
    v13 = a2[1];
    v14 = v16;
    std::move<std::move_iterator<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>,detail::back_insert_iterator_unchecked<detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>>>(
      &v15,
      &v14,
      &v13,
      a1);
    v10 = a2[1];
    v11 = a2;
  }
  v13 = v10;
  v14 = v9;
  return detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase_unchecked(
           v11,
           &v15,
           &v14,
           &v13);
}
