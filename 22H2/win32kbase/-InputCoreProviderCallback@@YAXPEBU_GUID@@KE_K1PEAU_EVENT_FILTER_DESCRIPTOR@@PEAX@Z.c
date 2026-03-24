/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0121640
 * Callers:
 *     <none>
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C0044CEC (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C006F2A4 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     RIMSyncWalkRimObjList @ 0x1C00A4E7C (RIMSyncWalkRimObjList.c)
 *     ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1C0121690 (-SessionInfo@Win32k@InputTraceLogging@@SAXXZ.c)
 *     ?TraceCurrentState@CCursorClip@@SAXXZ @ 0x1C01A2E18 (-TraceCurrentState@CCursorClip@@SAXXZ.c)
 */

void __fastcall InputCoreProviderCallback(const struct _GUID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  InputTraceLogging::Perf::s_userCritLoggingEnabled = InputTraceLogging::Enabled(0x2000, a2, a3, a4);
  if ( gProtocolType != -1 )
  {
    InputTraceLogging::Win32k::SessionInfo();
    InputConfig::TraceCurrentConfig();
    CCursorClip::TraceCurrentState();
    RIMSyncWalkRimObjList(
      1,
      0LL,
      (void (__fastcall *)(_QWORD *, __int64))lambda_d1874fae19b79ef5393f0e0766cf3e96_::_lambda_invoker_cdecl_);
  }
}
