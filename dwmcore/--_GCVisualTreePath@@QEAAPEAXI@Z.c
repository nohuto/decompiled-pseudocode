CVisualTreePath *__fastcall CVisualTreePath::`scalar deleting destructor'(CVisualTreePath *this)
{
  __int64 v2; // r8
  void *v3; // rcx
  bool v4; // zf

  v2 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4;
  if ( v2 )
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this,
      0LL,
      v2);
  v3 = *(void **)this;
  v4 = *(_QWORD *)this == (_QWORD)this + 24;
  *(_QWORD *)this = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
  operator delete(this);
  return this;
}
