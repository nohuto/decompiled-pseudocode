char *__fastcall CoordMap::GetAllHollowRects<detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>>(
        __int64 a1,
        __int64 a2)
{
  __int128 *v3; // rdi
  __int128 *v4; // rbx
  detail::liberal_expansion_policy *v5; // rcx
  char *result; // rax
  __int128 v7; // xmm0

  detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::clear(a2);
  v3 = *(__int128 **)(a1 + 376);
  v4 = *(__int128 **)(a1 + 368);
  result = detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::reserve_region(
             v5,
             (__int64)(*((_QWORD *)v5 + 1) - *(_QWORD *)v5) >> 4,
             v3 - v4);
  while ( v4 != v3 )
  {
    v7 = *v4++;
    *(_OWORD *)result = v7;
    result += 16;
  }
  return result;
}
