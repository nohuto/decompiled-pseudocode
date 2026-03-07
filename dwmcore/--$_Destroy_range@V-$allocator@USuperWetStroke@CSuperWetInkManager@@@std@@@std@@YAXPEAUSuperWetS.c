__int64 __fastcall std::_Destroy_range<std::allocator<CSuperWetInkManager::SuperWetStroke>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v3 + 8);
      v3 += 104LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
