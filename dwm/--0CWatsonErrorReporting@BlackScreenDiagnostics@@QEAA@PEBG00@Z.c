/*
 * XREFs of ??0CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@PEBG00@Z @ 0x14000DC38
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D134 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     IsWerReportCreatePresent @ 0x140006734 (IsWerReportCreatePresent.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x14000C5C4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

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
