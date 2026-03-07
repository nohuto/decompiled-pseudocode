_QWORD *__fastcall detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,32,1,detail::liberal_expansion_policy>>::erase(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rbx

  v6 = (*a3 - *a1) >> 3;
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v6,
    (__int64)(*a4 - *a3) >> 3);
  *a2 = *a1 + 8 * v6;
  return a2;
}
