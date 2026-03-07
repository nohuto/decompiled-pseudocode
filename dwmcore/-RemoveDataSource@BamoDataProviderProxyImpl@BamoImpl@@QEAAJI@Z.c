__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::RemoveDataSource(
        BamoImpl::BamoDataProviderProxyImpl *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdi
  Microsoft::BamoImpl::BamoProxyImpl *v5; // rbx
  char *v6; // rsi
  __int64 v8; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // r14
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  _BYTE v22[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *((_QWORD *)this + 2);
  v5 = 0LL;
  v6 = 0LL;
  v8 = *(_QWORD *)(v4 + 24);
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32);
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32),
              *(_DWORD *)(v4 + 36),
              a2);
    v5 = Proxy;
    if ( !Proxy )
    {
      v11 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v4 + 24) + 32LL),
              0x87B2080C,
              0);
      v12 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C71,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v11);
      return v12;
    }
    v6 = (char *)Proxy - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v22,
    v9,
    a3,
    a4);
  v14 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16, v6);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v22,
    v15,
    v16,
    v17);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v18, v19);
  if ( v5 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v5, v20, v21);
  return v14;
}
