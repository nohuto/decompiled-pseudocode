void *__fastcall std::_Destroy_range<std::allocator<CDepthSortedVisualCollection>>(
        CDepthSortedVisualCollection *this,
        CDepthSortedVisualCollection *a2)
{
  CDepthSortedVisualCollection *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CDepthSortedVisualCollection::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (CDepthSortedVisualCollection *)((char *)v3 + 56);
    }
    while ( v3 != a2 );
  }
  return result;
}
