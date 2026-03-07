_QWORD *__fastcall wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>::`scalar deleting destructor'(
        _QWORD *a1)
{
  if ( *a1 )
    CMILRefCountBaseT<IDeviceResource>::InternalRelease();
  return a1;
}
