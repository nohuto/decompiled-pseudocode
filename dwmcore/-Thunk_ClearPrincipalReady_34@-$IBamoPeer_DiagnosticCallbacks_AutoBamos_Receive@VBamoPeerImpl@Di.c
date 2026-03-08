/*
 * XREFs of ?Thunk_ClearPrincipalReady_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B8610
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x1800AD394 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801B89E0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive<BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl>::Thunk_ClearPrincipalReady_34(
        __int64 a1,
        unsigned int **a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rbx
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 i; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL);
  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(v2, **a2);
  if ( Principal )
  {
    for ( i = *((_QWORD *)Principal + 4); i; i = *(_QWORD *)(i + 40) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(i + 32) + 36LL) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Principal + 2) + 32LL) + 32LL) )
        break;
    }
    *(_BYTE *)(i + 57) = 0;
    return 0;
  }
  else
  {
    v4 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v2, -2018375668, 0);
    v5 = v4;
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x624,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v4);
  }
  return v5;
}
