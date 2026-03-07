void **__fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CRegion>>>(void ***a1, void ***a2)
{
  void ***v3; // rbx
  void **result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = CRegion::`scalar deleting destructor'(*v3, 1);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
