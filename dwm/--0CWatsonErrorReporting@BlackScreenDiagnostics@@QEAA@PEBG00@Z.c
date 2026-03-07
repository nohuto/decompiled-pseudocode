BlackScreenDiagnostics::CWatsonErrorReporting *__fastcall BlackScreenDiagnostics::CWatsonErrorReporting::CWatsonErrorReporting(
        BlackScreenDiagnostics::CWatsonErrorReporting *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 8) = IsWerReportCreatePresent() != 0;
  std::wstring::wstring((_QWORD *)this + 2, L"WindowsBlackScreenDiagnosticsV1", v5);
  std::wstring::wstring((_QWORD *)this + 6, L"Black Screen - User Reported", v6);
  std::wstring::wstring(
    (_QWORD *)this + 10,
    L"The user has invoked the Black Screen Diagnostics Tool to generate this report",
    v7);
  return this;
}
