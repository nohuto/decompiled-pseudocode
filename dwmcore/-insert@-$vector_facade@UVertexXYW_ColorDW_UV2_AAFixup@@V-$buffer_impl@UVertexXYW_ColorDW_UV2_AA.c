_QWORD *__fastcall detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::insert(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _OWORD *a5)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  _OWORD *i; // rax
  _QWORD *result; // rax

  v6 = (__int64)(*a3 - *a1) >> 6;
  v7 = a4;
  for ( i = (_OWORD *)detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::reserve_region(
                        a1,
                        v6,
                        a4); v7; --v7 )
  {
    *i = *a5;
    i += 4;
    *(i - 3) = a5[1];
    *(i - 2) = a5[2];
    *(i - 1) = a5[3];
  }
  result = a2;
  *a2 = *a1 + (v6 << 6);
  return result;
}
