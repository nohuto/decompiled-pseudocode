__int64 __fastcall detail::destruct_range<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
