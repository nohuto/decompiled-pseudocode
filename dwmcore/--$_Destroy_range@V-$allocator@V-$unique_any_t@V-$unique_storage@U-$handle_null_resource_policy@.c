int __fastcall std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>>(
        HANDLE *a1,
        HANDLE *a2)
{
  HANDLE *v3; // rbx
  unsigned __int64 v4; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = (unsigned __int64)*v3 - 1;
      if ( v4 <= 0xFFFFFFFFFFFFFFFDuLL )
        LODWORD(v4) = CloseHandle(*v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return v4;
}
