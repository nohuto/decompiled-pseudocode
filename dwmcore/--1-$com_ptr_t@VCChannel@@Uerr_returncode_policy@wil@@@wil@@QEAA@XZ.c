unsigned int __fastcall wil::com_ptr_t<CChannel,wil::err_returncode_policy>::~com_ptr_t<CChannel,wil::err_returncode_policy>(
        CChannel **a1)
{
  CChannel *v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return CChannel::Release(v1);
  return result;
}
