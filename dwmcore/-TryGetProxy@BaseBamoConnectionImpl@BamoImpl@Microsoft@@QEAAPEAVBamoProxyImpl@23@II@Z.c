struct Microsoft::BamoImpl::BamoProxyImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2,
        unsigned int a3)
{
  struct Microsoft::BamoImpl::BamoProxyImpl *result; // rax

  result = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(this, a2, a3);
  if ( result )
    return (struct Microsoft::BamoImpl::BamoProxyImpl *)(*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)result + 48LL))(result);
  return result;
}
