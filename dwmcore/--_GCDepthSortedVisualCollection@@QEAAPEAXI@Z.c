CDepthSortedVisualCollection *__fastcall CDepthSortedVisualCollection::`scalar deleting destructor'(
        CDepthSortedVisualCollection *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 16 * ((__int64)(*((_QWORD *)this + 6) - (_QWORD)v2) >> 4));
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    std::_Destroy_range<std::allocator<CDepthSortingLayer>>(*(_QWORD *)this, *((_QWORD *)this + 1));
    std::_Deallocate<16,0>(*(void **)this, 8 * ((__int64)(*((_QWORD *)this + 2) - *(_QWORD *)this) >> 3));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  return this;
}
