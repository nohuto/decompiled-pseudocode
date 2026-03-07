void __fastcall BlackScreenDiagnostics::CWatsonErrorReporting::CollectCurrentProcessHeapDump(HREPORT *this)
{
  HANDLE CurrentProcess; // rax
  HRESULT v3; // eax
  __int64 v4; // rcx

  if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(this) )
  {
    CurrentProcess = GetCurrentProcess();
    v3 = WerReportAddDump(*this, CurrentProcess, 0LL, WerDumpTypeHeapDump, 0LL, 0LL, 0);
    if ( v3 < 0 )
      MicrosoftTelemetryAssertTriggeredArgs(v4, (unsigned int)v3, 0LL);
  }
}
