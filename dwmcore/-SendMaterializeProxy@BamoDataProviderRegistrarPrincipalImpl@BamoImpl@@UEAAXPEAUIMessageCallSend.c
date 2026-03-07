void __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  int v8; // eax
  int v9; // eax
  unsigned int ItemId; // eax
  int v11; // eax
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 4);
  v4 = (__int64)a2 + 56;
  if ( *(_BYTE *)(v3 + 48) )
  {
    v12 = (__int64)a2 + 56;
    if ( !a2 )
      v12 = 72LL;
    *(_BYTE *)v12 = 1;
  }
  LODWORD(v15) = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v17 = *(unsigned int *)(v3 + 36);
  v18 = *(unsigned int *)(v3 + 40);
  v8 = CoreUICallSend(a2, &v17, 2LL, 7LL, 2, &unk_180350DF5, v15);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2DE4,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v8,
      v13);
  v9 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2DF3,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v9,
      v13);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    if ( !a2 )
      v4 = 72LL;
    *(_BYTE *)v4 = 1;
  }
  ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v17 = *(unsigned int *)(v3 + 36);
  LODWORD(v16) = ItemId;
  v18 = *(unsigned int *)(v3 + 40);
  v11 = CoreUICallSend(a2, &v17, 2LL, 7LL, 5, &unk_180350DF5, v16);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E09,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v11,
      v14);
}
