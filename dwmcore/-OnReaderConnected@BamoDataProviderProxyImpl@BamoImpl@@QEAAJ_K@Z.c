__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::OnReaderConnected(
        BamoImpl::BamoDataProviderProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rcx
  char *v11; // rax
  _QWORD v12[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v14; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      10976LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AE9,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v16, &v14, &v15);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v16;
      if ( *((_BYTE *)this + 31) )
      {
        v11 = (char *)v16 - 16;
        if ( !v16 )
          v11 = 0LL;
        v11[72] = 1;
      }
      v12[0] = v14;
      v12[1] = v15;
      return CoreUICallSend(
               v10,
               v12,
               2LL,
               0LL,
               0,
               &Microsoft::CoreUI::MessageCall::dataprovider_g_parameters_CHRfEUtvywYOFEguPMoqpTbR1jc_BamoGroup$71ca3cb6,
               a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2AF0,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
