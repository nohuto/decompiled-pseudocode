__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::Register(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        unsigned int a2)
{
  _QWORD *v2; // rbx
  int v3; // edi
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // r14
  char *v11; // r12
  __int64 v12; // r13
  Microsoft::BamoImpl::BamoProxyImpl *v13; // rbx
  __int64 v14; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v15; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v17; // eax
  __int64 v18; // r8
  const char *v19; // r9
  __int64 v20; // rdx
  int v22; // eax
  unsigned int v23; // ebx
  int v24[8]; // [rsp+20h] [rbp-48h] BYREF
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
  v10 = v2[4];
  v11 = 0LL;
  v12 = v7;
  v13 = 0LL;
  v14 = *(_QWORD *)(v10 + 24);
  v15 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v14 + 32);
  if ( !a2 )
    goto LABEL_7;
  Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
            *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v14 + 32),
            *(_DWORD *)(v10 + 36),
            a2);
  v13 = Proxy;
  if ( Proxy )
  {
    v11 = (char *)Proxy - 16;
LABEL_7:
    if ( *((int *)this + 2) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        (__int64)v24,
        v15,
        v8,
        v9);
      v17 = (*(__int64 (__fastcall **)(char *, __int64, char *))(*((_QWORD *)this - 2) + 80LL))(
              (char *)this - 16,
              v12,
              v11);
      v20 = 2276591628LL;
      v3 = v17;
      if ( v17 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v15, -2018375668, 0);
      }
      else if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2D2F,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v17,
          v24[0]);
      }
      Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        (__int64)v24,
        v20,
        v18,
        v19);
    }
    if ( v13 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v13);
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D3E,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v3,
        v24[0]);
    return (unsigned int)v3;
  }
  v22 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v10 + 24) + 32LL),
          -2018375668,
          0);
  v23 = v22;
  if ( v22 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1B,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v22,
      v24[0]);
  return v23;
}
