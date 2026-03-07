volatile signed __int32 **__fastcall wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>::`scalar deleting destructor'(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *a1;
  if ( v2 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
  return a1;
}
