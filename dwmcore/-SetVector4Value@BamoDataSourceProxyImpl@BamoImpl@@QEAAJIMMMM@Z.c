__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::SetVector4Value(
        BamoImpl::BamoDataSourceProxyImpl *this,
        unsigned int a2,
        float a3,
        float a4)
{
  __int64 v4; // r8
  const char *v5; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  _BYTE v15[32]; // [rsp+40h] [rbp-48h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v15,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    v4,
    v5);
  v8 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 152LL))((char *)this - 16, a2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v15,
    v9,
    v10,
    v11);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v12, v13);
  return v8;
}
