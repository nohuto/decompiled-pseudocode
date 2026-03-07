char __fastcall detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::operator==<detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>,void>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD **)a2;
  v5 = *a1;
  if ( (((v2 - (_QWORD)v4) ^ (a1[1] - v5)) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    return 0;
  v6 = v5 - (_QWORD)v4;
  while ( (_QWORD *)((char *)v4 + v6) != (_QWORD *)a1[1] )
  {
    if ( *(_QWORD *)((char *)v4 + v6) != *v4 || *(_QWORD *)((char *)v4 + v6 + 8) != v4[1] )
      return 0;
    v4 += 2;
  }
  return 1;
}
