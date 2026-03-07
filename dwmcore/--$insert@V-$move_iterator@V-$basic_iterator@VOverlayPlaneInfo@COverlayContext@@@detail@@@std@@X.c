_QWORD *__fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::insert<std::move_iterator<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>,void>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // rcx

  v8 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*a3 - *a1) >> 5);
  v9 = detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         v8,
         0x6DB6DB6DB6DB6DB7LL * ((*a5 - *a4) >> 5));
  v10 = *a5;
  v11 = v9;
  v12 = *a4;
  while ( v12 != v10 )
  {
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v11, v12);
    v12 = v14 + v13;
    v11 = v14 + v15;
  }
  *a2 = *a1 + 224 * v8;
  return a2;
}
