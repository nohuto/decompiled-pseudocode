/*
 * XREFs of ?CollectCurrentProcessHeapDump@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXXZ @ 0x14000DD54
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D134 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000DE60 (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000DF68 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

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
