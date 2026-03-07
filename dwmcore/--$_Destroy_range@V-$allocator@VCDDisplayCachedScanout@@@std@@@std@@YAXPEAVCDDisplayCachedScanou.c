__int64 *__fastcall std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    do
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v3 + 2);
      v4 = *(v3 - 1);
      if ( v4 )
      {
        std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(v4, *v3);
        std::_Deallocate<16,0>((void *)*(v3 - 1), 16 * ((v3[1] - *(v3 - 1)) >> 4));
        *(v3 - 1) = 0LL;
        *v3 = 0LL;
        v3[1] = 0LL;
      }
      v3 += 5;
      result = v3 - 1;
    }
    while ( v3 - 1 != a2 );
  }
  return result;
}
