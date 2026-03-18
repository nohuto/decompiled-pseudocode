/*
 * XREFs of ??0InkProcessor@@AEAA@XZ @ 0x1C00EFBFC
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00F0120 (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C03777C8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

InkProcessor *__fastcall InkProcessor::InkProcessor(InkProcessor *this)
{
  InkFeedbackServer *v2; // rbx
  int v4; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  v2 = (InkProcessor *)((char *)this + 96);
  *((_BYTE *)this + 8) = 0;
  *((_QWORD *)this + 10) = "HideInkCursorProvider";
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 4) = &HideInkCursorProvider::`vftable';
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0326250);
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_InkProcessor__private_reporting,
    0x7C1F58u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_StrictIAMForegroundCheck_logged_traits,
    1,
    v4);
  *((_BYTE *)this + 8) = 1;
  InkFeedbackServer::AddInkFeedbackProvider(v2, (InkProcessor *)((char *)this + 32));
  return this;
}
