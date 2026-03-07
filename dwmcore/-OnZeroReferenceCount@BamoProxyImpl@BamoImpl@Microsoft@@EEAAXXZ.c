void __fastcall Microsoft::BamoImpl::BamoProxyImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  __int64 v2; // r8
  const char *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  const char *v6; // r9
  __int64 v7; // r8
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_BYTE *)this + 28) )
  {
    if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 72LL))(
        *((_QWORD *)this + 2),
        *((unsigned int *)this + 6));
    if ( *((_BYTE *)this + 29) )
    {
      Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        v8,
        *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
        v2,
        v3);
      v4 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 56LL))(this);
      v7 = v4;
      if ( v4 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        (__int64)v8,
        v5,
        v7,
        v6);
    }
  }
}
