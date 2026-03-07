__int64 __fastcall IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive<BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_37(
        __int64 a1,
        __int64 a2)
{
  char v3; // si
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rbx
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  const char *v6; // r9
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v11; // rcx
  int v13; // eax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = **(_BYTE **)(a2 + 8);
  v4 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL);
  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(v4, **(_DWORD **)a2);
  if ( Principal )
  {
    v10 = *((_QWORD *)Principal + 4);
    if ( v10 )
    {
      v11 = (Microsoft::BamoImpl::BamoPrincipalImpl *)*(unsigned int *)(a1 + 36);
      while ( *(_DWORD *)(*(_QWORD *)(v10 + 32) + 36LL) != (_DWORD)v11 )
      {
        v10 = *(_QWORD *)(v10 + 40);
        if ( !v10 )
          goto LABEL_8;
      }
      v13 = *(_DWORD *)(v10 + 16);
      if ( !v13 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          213LL,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
          v6);
      v14 = v13 - 1;
      *(_DWORD *)(v10 + 16) = v14;
      if ( !v3 && !v14 && !*(_BYTE *)(v10 + 58) )
        Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(
          v11,
          (struct Microsoft::BamoImpl::BamoStubImpl *)v10,
          0);
      return 0;
    }
    else
    {
LABEL_8:
      v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v4, -2018375668, 0);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 1613LL;
        goto LABEL_10;
      }
    }
  }
  else
  {
    v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v4, -2018375668, 0);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1604LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v7);
    }
  }
  return v8;
}
