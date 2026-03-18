/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C014C410
 * Callers:
 *     <none>
 * Callees:
 *     ??0CTempW32TlsForThread@@QEAA@XZ @ 0x1C0029CE8 (--0CTempW32TlsForThread@@QEAA@XZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C003802C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ??1CTempW32TlsForThread@@QEAA@XZ @ 0x1C0047598 (--1CTempW32TlsForThread@@QEAA@XZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C00A04E4 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     RIMSyncWalkRimObjList @ 0x1C00B4890 (RIMSyncWalkRimObjList.c)
 *     ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1C014C474 (-SessionInfo@Win32k@InputTraceLogging@@SAXXZ.c)
 *     ?TraceCurrentState@CCursorClip@@SAXXZ @ 0x1C01DBCA8 (-TraceCurrentState@CCursorClip@@SAXXZ.c)
 */

void __fastcall InputCoreProviderCallback(const struct _GUID *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  InputTraceLogging::Perf::s_userCritLoggingEnabled = InputTraceLogging::Enabled(0x2000);
  if ( gProtocolType != -1 )
  {
    CTempW32TlsForThread::CTempW32TlsForThread((CTempW32TlsForThread *)v3);
    InputTraceLogging::Win32k::SessionInfo();
    InputConfig::TraceCurrentConfig();
    CCursorClip::TraceCurrentState();
    RIMSyncWalkRimObjList(
      1,
      0LL,
      (void (__fastcall *)(_QWORD *, __int64))lambda_7c683ce7e834e820b1e487ff164319c2_::_lambda_invoker_cdecl_);
    CTempW32TlsForThread::~CTempW32TlsForThread((CTempW32TlsForThread *)v3, v1, v2);
  }
}
