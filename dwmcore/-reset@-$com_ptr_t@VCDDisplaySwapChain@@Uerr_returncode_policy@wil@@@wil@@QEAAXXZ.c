__int64 __fastcall wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CMILCOMBaseWeakRef::InternalRelease((CMILCOMBaseWeakRef *)(result + 16));
  return result;
}
