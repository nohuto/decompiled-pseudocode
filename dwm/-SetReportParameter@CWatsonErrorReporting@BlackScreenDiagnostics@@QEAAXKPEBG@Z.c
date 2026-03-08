/*
 * XREFs of ?SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z @ 0x14000DE04
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D134 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000DE60 (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000DF68 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
        HREPORT *this,
        DWORD a2,
        const unsigned __int16 *a3)
{
  HRESULT v6; // eax
  __int64 v7; // rcx

  if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(this) )
  {
    v6 = WerReportSetParameter(*this, a2, 0LL, a3);
    if ( v6 < 0 )
      MicrosoftTelemetryAssertTriggeredArgs(v7, (unsigned int)v6, a2);
  }
}
