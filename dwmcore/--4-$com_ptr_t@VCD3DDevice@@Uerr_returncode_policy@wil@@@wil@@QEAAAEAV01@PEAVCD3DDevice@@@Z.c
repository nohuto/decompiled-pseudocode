CD3DDevice **__fastcall wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::operator=(CD3DDevice **a1, __int64 a2)
{
  CD3DDevice *v2; // rdi

  v2 = *a1;
  *a1 = (CD3DDevice *)a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
  if ( v2 )
    CD3DDevice::Release(v2);
  return a1;
}
