__int64 __fastcall IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive<BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl>::Thunk_ProxyDisposed_34(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        unsigned int **a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rbx
  Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 32LL);
  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(v3, **a2);
  if ( Principal )
  {
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::ProxyDisposed(Principal, a1) )
      return 0;
    v5 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v3, -2018375668, 0);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 1758LL;
      goto LABEL_4;
    }
  }
  else
  {
    v5 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v3, -2018375668, 0);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 1749LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v5);
    }
  }
  return v6;
}
