__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_17(
        __int64 a1,
        __int64 a2)
{
  char v3; // si
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rbx
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  const char *v6; // r9
  __int64 v7; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v8; // rcx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = **(_BYTE **)(a2 + 8);
  v4 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL);
  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(v4, **(_DWORD **)a2);
  if ( !Principal )
  {
    v13 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v4, -2018375668, 0);
    v11 = v13;
    if ( v13 >= 0 )
      return v11;
    v14 = 1604LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v13);
    return v11;
  }
  v7 = *((_QWORD *)Principal + 4);
  if ( !v7 )
  {
LABEL_12:
    v13 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v4, -2018375668, 0);
    v11 = v13;
    if ( v13 >= 0 )
      return v11;
    v14 = 1613LL;
    goto LABEL_14;
  }
  v8 = (Microsoft::BamoImpl::BamoPrincipalImpl *)*(unsigned int *)(a1 + 36);
  while ( *(_DWORD *)(*(_QWORD *)(v7 + 32) + 36LL) != (_DWORD)v8 )
  {
    v7 = *(_QWORD *)(v7 + 40);
    if ( !v7 )
      goto LABEL_12;
  }
  v9 = *(_DWORD *)(v7 + 16);
  if ( !v9 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD5,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
      v6);
  v10 = v9 - 1;
  *(_DWORD *)(v7 + 16) = v10;
  if ( !v3 && !v10 && !*(_BYTE *)(v7 + 58) )
    Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(v8, (struct Microsoft::BamoImpl::BamoStubImpl *)v7, 0);
  return 0;
}
