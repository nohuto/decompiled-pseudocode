__int64 __fastcall detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (__int64)(a1[1] - *a1) >> 3;
  if ( result )
  {
    result *= 8LL;
    a1[1] -= result;
  }
  return result;
}
