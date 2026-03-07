__int64 *__fastcall std::_Uninitialized_move<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // r8

  while ( a1 != a2 )
  {
    v5 = *a1;
    *a1 = 0LL;
    *a3++ = v5;
    ++a1;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>>(a3, a3);
  return a3;
}
