/*
 * XREFs of ?Thunk_ProxyDisposed_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B8910
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x1800AD394 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProxyDisposed@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@@Z @ 0x1801B76A0 (-ProxyDisposed@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801B89E0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

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
