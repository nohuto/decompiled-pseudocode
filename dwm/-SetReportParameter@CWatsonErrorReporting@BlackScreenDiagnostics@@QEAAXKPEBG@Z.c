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
