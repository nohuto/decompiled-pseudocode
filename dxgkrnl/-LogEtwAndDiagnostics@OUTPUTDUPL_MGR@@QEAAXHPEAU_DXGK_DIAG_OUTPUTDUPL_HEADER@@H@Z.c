void __fastcall OUTPUTDUPL_MGR::LogEtwAndDiagnostics(
        DXGDIAGNOSTICS **this,
        int a2,
        struct _DXGK_DIAG_OUTPUTDUPL_HEADER *a3,
        int a4)
{
  DXGDIAGNOSTICS *v8; // rcx

  if ( bTracingEnabled )
    OUTPUTDUPL_MGR::LogEtw((OUTPUTDUPL_MGR *)this, a3, (__int64)a3);
  if ( a4 )
  {
    if ( a2 )
      v8 = (DXGDIAGNOSTICS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 117);
    else
      v8 = this[10];
    if ( v8 )
      DXGDIAGNOSTICS::WriteDiagnosticEntry(v8, a3);
  }
}
