__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::UpdateRestrictToProcessIds(
        BamoImpl::BamoDataSourceProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoProxyImpl *v4; // rsi
  char *v5; // r14
  void (__fastcall ***v6)(_QWORD); // rdi
  char v7; // r12
  __int64 v9; // rdi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v11; // eax
  unsigned int v12; // ebx
  char *v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  const char *v23; // r9
  int v24[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0LL;
  v5 = (char *)this + 16;
  v6 = 0LL;
  v7 = a2;
  if ( (_DWORD)a3 )
  {
    v9 = *(_QWORD *)v5;
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)v5 + 24LL) + 32LL),
              *(_DWORD *)(*(_QWORD *)v5 + 36LL),
              a3);
    v4 = Proxy;
    if ( !Proxy )
    {
      v11 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v9 + 24) + 32LL),
              0x87B2080C,
              0);
      v12 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x36B8,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v11);
      return v12;
    }
    v6 = (void (__fastcall ***)(_QWORD))((char *)Proxy - 16);
  }
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v24,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)v5 + 24LL) + 32LL),
      a3,
      a4);
    v14 = (char *)this - 16;
    v15 = (*(__int64 (__fastcall **)(char *, void (__fastcall ***)(_QWORD)))(*((_QWORD *)this - 2) + 104LL))(
            (char *)this - 16,
            v6);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        14020LL,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v15,
        v24[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v24,
      v16,
      v17,
      v18);
  }
  else
  {
    v14 = (char *)this - 16;
  }
  v19 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = v6;
  if ( v6 )
    (**v6)(v6);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v4, a2, a3);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v24,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)v5 + 24LL) + 32LL),
      a3,
      a4);
    v20 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v14 + 112LL))(v14);
    if ( v20 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        14036LL,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v20,
        v24[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v24,
      v21,
      v22,
      v23);
  }
  if ( v7 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
