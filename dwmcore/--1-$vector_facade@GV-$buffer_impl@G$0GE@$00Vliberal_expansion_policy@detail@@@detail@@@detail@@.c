void __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::~vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  __int64 v2; // r8
  void *v3; // rcx
  bool v4; // zf

  v2 = (a1[1] - *a1) >> 1;
  if ( v2 )
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::clear_region(
      a1,
      0LL,
      v2);
  v3 = (void *)*a1;
  v4 = *a1 == (_QWORD)(a1 + 3);
  *a1 = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
}
