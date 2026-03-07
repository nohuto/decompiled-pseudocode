__int64 __fastcall DiagnosticCallbacks_AutoBamos::BamoConnection::AllocatePeer(
        DiagnosticCallbacks_AutoBamos::BamoConnection *this,
        struct DiagnosticCallbacks_AutoBamos::BamoPeer **a2)
{
  _DWORD *v3; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = operator new(0x68uLL);
  if ( !v3 )
  {
    *a2 = 0LL;
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      3817LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      v4);
  }
  *(_QWORD *)v3 = &DiagnosticCallbacks_AutoBamos::BamoPeer::`vftable';
  v3[4] = 1;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 3) = v3;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  *((_WORD *)v3 + 28) = 0;
  *((_QWORD *)v3 + 8) = 0LL;
  *((_QWORD *)v3 + 9) = 0LL;
  *((_QWORD *)v3 + 10) = 0LL;
  *((_QWORD *)v3 + 11) = 0LL;
  *((_QWORD *)v3 + 12) = 0LL;
  *((_QWORD *)v3 + 1) = &BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl::`vftable';
  *a2 = (struct DiagnosticCallbacks_AutoBamos::BamoPeer *)v3;
  return 0LL;
}
