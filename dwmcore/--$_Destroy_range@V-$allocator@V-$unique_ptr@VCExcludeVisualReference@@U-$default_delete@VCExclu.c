void *__fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CExcludeVisualReference>>>(
        CExcludeVisualReference **a1,
        CExcludeVisualReference **a2)
{
  CExcludeVisualReference **v3; // rbx
  void *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = CExcludeVisualReference::`scalar deleting destructor'(*v3, (unsigned int)a2);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
