_QWORD *__fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::insert(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _OWORD *a5)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  _OWORD *i; // rax
  _QWORD *result; // rax

  v6 = (__int64)(*a3 - *a1) >> 4;
  v7 = a4;
  for ( i = (_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::reserve_region(
                        a1,
                        v6,
                        a4); v7; --v7 )
    *i++ = *a5;
  result = a2;
  *a2 = *a1 + 16 * v6;
  return result;
}
