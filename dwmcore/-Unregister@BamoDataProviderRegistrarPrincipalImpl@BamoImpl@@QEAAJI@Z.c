__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::Unregister(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        unsigned int a2)
{
  _QWORD *v2; // rbx
  int v3; // edi
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // r14
  char *v12; // r12
  __int64 v13; // r13
  Microsoft::BamoImpl::BamoProxyImpl *v14; // rbx
  __int64 v15; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v16; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v18; // eax
  unsigned int v19; // ebx
  int v21; // eax
  __int64 v22; // r8
  const char *v23; // r9
  __int64 v24; // rdx
  int v25[8]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 4);
  v3 = 0;
  if ( v2 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v2[4] + 36LL) == v6 )
        break;
      v2 = (_QWORD *)v2[5];
    }
    while ( v2 );
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 32LL))(v2);
  v11 = v2[4];
  v12 = 0LL;
  v13 = v7;
  v14 = 0LL;
  v15 = *(_QWORD *)(v11 + 24);
  v16 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v15 + 32);
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v15 + 32),
              *(_DWORD *)(v11 + 36),
              a2);
    v14 = Proxy;
    if ( !Proxy )
    {
      v18 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v11 + 24) + 32LL),
              0x87B2080C,
              0);
      v19 = v18;
      if ( v18 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D5B,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v18);
      return v19;
    }
    v12 = (char *)Proxy - 16;
  }
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v25,
      v16,
      v9,
      v10);
    v21 = (*(__int64 (__fastcall **)(char *, __int64, char *))(*((_QWORD *)this - 2) + 88LL))(
            (char *)this - 16,
            v13,
            v12);
    v24 = 2276591628LL;
    v3 = v21;
    if ( v21 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        (struct Microsoft::BamoImpl::ConnectionIndirector **)v16,
        0x87B2080C,
        0);
    }
    else if ( v21 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        11631LL,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v21,
        v25[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v25,
      v24,
      v22,
      v23);
  }
  if ( v14 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v14, v8, v9);
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D7E,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
