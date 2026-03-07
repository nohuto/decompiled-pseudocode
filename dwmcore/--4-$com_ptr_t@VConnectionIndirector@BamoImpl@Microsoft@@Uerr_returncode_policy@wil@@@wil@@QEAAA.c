Microsoft::BamoImpl::BamoImplObject **__fastcall wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
        Microsoft::BamoImpl::BamoImplObject **a1,
        volatile signed __int32 *a2)
{
  Microsoft::BamoImpl::BamoImplObject *v3; // rcx

  v3 = *a1;
  *a1 = (Microsoft::BamoImpl::BamoImplObject *)a2;
  if ( a2 )
    _InterlockedIncrement(a2 + 2);
  if ( v3 )
    Microsoft::BamoImpl::BamoImplObject::Release(v3);
  return a1;
}
