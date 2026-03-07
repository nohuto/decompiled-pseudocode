_QWORD *__fastcall std::move<std::move_iterator<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>,detail::back_insert_iterator_unchecked<detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  _QWORD *result; // rax
  __int64 v9; // rax

  v4 = *a2;
  v6 = *a3;
  while ( v4 != v6 )
  {
    v9 = detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::reserve_region(
           a4,
           0x6DB6DB6DB6DB6DB7LL * ((__int64)(a4[1] - *a4) >> 5),
           1LL);
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v9, v4);
    v4 += 224LL;
  }
  result = a1;
  *a1 = a4;
  return result;
}
