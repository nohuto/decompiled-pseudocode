__int64 __fastcall BamoDataProviderProxy::OnConnectedCallout(
        BamoDataProviderProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  BamoDataProviderProxy *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = this;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v9,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    a3,
    a4);
  LODWORD(v4) = (*(__int64 (__fastcall **)(BamoDataProviderProxy *))(*(_QWORD *)v4 + 32LL))(v4);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v9,
    v5,
    v6,
    v7);
  return (unsigned int)v4;
}
