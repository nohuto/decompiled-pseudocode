_QWORD *__fastcall std::_Uninitialized_copy<std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
        char *a1,
        char *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rbp
  _OWORD *v7; // rbx
  _OWORD *v8; // r14
  char *i; // rax
  _OWORD *v10; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a3 + 4;
    v6 = a1 - (char *)a3;
    do
    {
      *v3 = *(_QWORD *)((char *)v5 + v6 - 32);
      *(v5 - 3) = v5;
      *(v5 - 1) = v5 + 4;
      *(v5 - 2) = v5;
      v7 = *(_OWORD **)((char *)v5 + v6 - 16);
      v8 = *(_OWORD **)((char *)v5 + v6 - 24);
      for ( i = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                  (detail::liberal_expansion_policy *)(v5 - 3),
                  0LL,
                  v7 - v8); ; i += 16 )
      {
        v10 = v8;
        if ( v8 == v7 )
          break;
        ++v8;
        *(_OWORD *)i = *v10;
      }
      v5 += 8;
      v3 += 8;
    }
    while ( (char *)v5 + v6 - 32 != a2 );
  }
  std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(v3, v3);
  return v3;
}
