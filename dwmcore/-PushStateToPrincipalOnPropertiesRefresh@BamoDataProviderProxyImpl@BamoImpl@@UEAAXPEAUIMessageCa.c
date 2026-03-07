void __fastcall BamoImpl::BamoDataProviderProxyImpl::PushStateToPrincipalOnPropertiesRefresh(
        BamoImpl::BamoDataProviderProxyImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  LODWORD(v10) = *((_DWORD *)this + 6);
  v12 = *((unsigned int *)a3 + 9);
  v13 = *((unsigned int *)a3 + 10);
  v6 = CoreUICallSend(a2, &v12, 2LL, 7LL, 14, &unk_180350DF5, v10);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      10930LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  (*(void (__fastcall **)(BamoImpl::BamoDataProviderProxyImpl *))(*(_QWORD *)this + 80LL))(this);
  LODWORD(v11) = *((_DWORD *)this + 6);
  v12 = *((unsigned int *)a3 + 9);
  v13 = *((unsigned int *)a3 + 10);
  v7 = CoreUICallSend(a2, &v12, 2LL, 7LL, 13, &unk_180350DF5, v11);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      10938LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
}
