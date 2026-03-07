__int64 __fastcall dataprovider_AutoBamos::BamoConnection::SetBootstrapProxyCallout(
        dataprovider_AutoBamos::BamoConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v10,
    (dataprovider_AutoBamos::BamoConnection *)((char *)this + 8),
    a3,
    a4);
  LODWORD(a2) = (*(__int64 (__fastcall **)(dataprovider_AutoBamos::BamoConnection *, struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 8LL))(
                  this,
                  a2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v10,
    v6,
    v7,
    v8);
  return (unsigned int)a2;
}
