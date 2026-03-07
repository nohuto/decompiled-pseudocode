_QWORD *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::insert(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  _QWORD *i; // rax
  _QWORD *result; // rax

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*a3 - *a1) >> 2);
  v7 = a4;
  for ( i = (_QWORD *)detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::reserve_region(
                        a1,
                        v6,
                        a4); v7; --v7 )
  {
    *i = *(_QWORD *)a5;
    i = (_QWORD *)((char *)i + 12);
    *((_DWORD *)i - 1) = *(_DWORD *)(a5 + 8);
  }
  result = a2;
  *a2 = *a1 + 12 * v6;
  return result;
}
