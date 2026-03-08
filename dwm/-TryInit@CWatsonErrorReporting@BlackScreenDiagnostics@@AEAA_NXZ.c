/*
 * XREFs of ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000DE60
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D134 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     ?CollectCurrentProcessHeapDump@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXXZ @ 0x14000DD54 (-CollectCurrentProcessHeapDump@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXXZ.c)
 *     ?QueueReportForSubmission@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA?AW4_WER_SUBMIT_RESULT@@XZ @ 0x14000DDBC (-QueueReportForSubmission@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA-AW4_WER_SUBMIT_RESU.c)
 *     ?SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z @ 0x14000DE04 (-SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140005510 (__security_check_cookie.c)
 *     memset_0 @ 0x1400063A8 (memset_0.c)
 *     ?copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z @ 0x14000DF28 (-copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z.c)
 */

bool __fastcall BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(HREPORT *phReportHandle)
{
  const WCHAR *v3; // rcx
  _WER_REPORT_INFORMATION pReportInformation; // [rsp+20h] [rbp-8B8h] BYREF

  if ( !*phReportHandle )
  {
    if ( !*((_BYTE *)phReportHandle + 8) )
      return 0;
    memset_0(&pReportInformation, 0, sizeof(pReportInformation));
    pReportInformation.dwSize = 2208;
    std::wstring::copy(phReportHandle + 6, pReportInformation.wzFriendlyEventName);
    std::wstring::copy(phReportHandle + 10, pReportInformation.wzDescription);
    v3 = (const WCHAR *)(phReportHandle + 2);
    if ( (unsigned __int64)phReportHandle[5] >= 8 )
      v3 = *(const WCHAR **)v3;
    if ( WerReportCreate(v3, WerReportCritical, &pReportInformation, phReportHandle) < 0 )
      *phReportHandle = 0LL;
  }
  return *phReportHandle != 0LL;
}
