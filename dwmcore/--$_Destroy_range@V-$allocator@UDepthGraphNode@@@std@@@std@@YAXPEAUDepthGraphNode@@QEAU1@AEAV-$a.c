_QWORD *__fastcall std::_Destroy_range<std::allocator<DepthGraphNode>>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 5;
    do
    {
      v4 = (void *)*(v3 - 2);
      if ( v4 )
      {
        std::_Deallocate<16,0>(v4, (*v3 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
        *(v3 - 2) = 0LL;
        *(v3 - 1) = 0LL;
        *v3 = 0LL;
      }
      v3 += 7;
      result = v3 - 5;
    }
    while ( v3 - 5 != a2 );
  }
  return result;
}
