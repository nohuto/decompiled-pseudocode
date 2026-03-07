__int64 __fastcall detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (__int64)(a1[1] - *a1) >> 2;
  if ( result )
  {
    result *= 4LL;
    a1[1] -= result;
  }
  return result;
}
