_QWORD *__fastcall detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::erase(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rbx

  v6 = 0x4EC4EC4EC4EC4EC5LL * ((*a3 - *a1) >> 2);
  detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v6,
    0x4EC4EC4EC4EC4EC5LL * ((__int64)(*a4 - *a3) >> 2));
  *a2 = *a1 + 52 * v6;
  return a2;
}
