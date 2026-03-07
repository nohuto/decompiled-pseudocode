__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
        CResource **a1,
        CResource **a2)
{
  CResource **v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = CResource::InternalRelease(*v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
