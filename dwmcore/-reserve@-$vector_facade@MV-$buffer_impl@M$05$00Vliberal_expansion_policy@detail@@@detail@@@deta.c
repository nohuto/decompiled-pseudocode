unsigned __int64 __fastcall detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(a1[1] - *a1) >> 2;
  if ( a2 > result )
    return detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a2 - result);
  return result;
}
