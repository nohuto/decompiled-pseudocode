CResource **__fastcall std::_Uninitialized_move<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
        CResource **a1,
        CResource **a2,
        CResource **a3)
{
  CResource *v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(a3, a3);
  return a3;
}
