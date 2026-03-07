void __fastcall BamoImpl::BamoDataProviderProxyImpl::UpdateNumberOfReadersRemoteCache(
        Microsoft::BamoImpl::BaseBamoPeerImpl **this)
{
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v3; // rax
  unsigned int *v4; // rcx
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rbx
  struct IMessageCallSendHost *v8; // rax
  unsigned int v9; // eax
  int v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)this) )
  {
    if ( *((_BYTE *)this + 31) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(this[2]);
      if ( SendHost )
        v3 = (__int64)SendHost + 56;
      else
        v3 = 72LL;
      *(_BYTE *)v3 = 1;
    }
    v4 = (unsigned int *)this[2];
    v5 = *((_DWORD *)this + 10);
    v6 = *((unsigned int *)this + 6);
    v7 = v4[9];
    v8 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v4);
    LODWORD(v11) = v5;
    v12[0] = v7;
    v12[1] = v6;
    v9 = CoreUICallSend(v8, v12, 2LL, 0LL, 6, &unk_180350DF5, v11);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        11445LL,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v9,
        v10);
  }
}
