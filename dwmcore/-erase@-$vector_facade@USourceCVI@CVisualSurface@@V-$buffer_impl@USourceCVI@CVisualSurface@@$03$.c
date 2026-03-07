_QWORD *__fastcall detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::erase(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rdi
  _QWORD *result; // rax

  v4 = (*a3 - *a1) >> 4;
  detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v4,
    1LL);
  result = a2;
  *a2 = *a1 + 16 * v4;
  return result;
}
