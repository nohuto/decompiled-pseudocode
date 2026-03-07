__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        struct IMessageCallSendHost **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  _DWORD *v6; // r9
  __int64 v7; // r10
  Microsoft::BamoImpl::BaseBamoPeerImpl **v8; // rdi
  int v9; // eax
  int v10; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0;
  if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) || *(_BYTE *)(v7 + 31) )
  {
    v8 = (Microsoft::BamoImpl::BaseBamoPeerImpl **)(v7 + 16);
    *v6 = *(_DWORD *)(v7 + 24);
  }
  else
  {
    v8 = (Microsoft::BamoImpl::BaseBamoPeerImpl **)(v7 + 16);
    v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 24LL) + 32LL),
           0x87B20805,
           0);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18B,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
        (const char *)(unsigned int)v9);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x171,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  *a2 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*v8);
  result = 0LL;
  *a3 = *((_DWORD *)*v8 + 9);
  return result;
}
