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
