/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0161760
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C00138F4 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0036710 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C007012C (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C007D0EC (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     RIMSyncWalkRimObjList @ 0x1C00BDC0C (RIMSyncWalkRimObjList.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage @ 0x1C00DDE50 (Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage.c)
 *     ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1C0161810 (-SessionInfo@Win32k@InputTraceLogging@@SAXXZ.c)
 *     ?TraceCurrentState@CCursorClip@@SAXXZ @ 0x1C020B300 (-TraceCurrentState@CCursorClip@@SAXXZ.c)
 *     TraceRawMouseThrottlingThresholds @ 0x1C0218C28 (TraceRawMouseThrottlingThresholds.c)
 *     ?ButtonState@Mouse@InputTraceLogging@@SAXK@Z @ 0x1C022B1BC (-ButtonState@Mouse@InputTraceLogging@@SAXK@Z.c)
 */

void __fastcall InputCoreProviderCallback(const struct _GUID *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 MouseProcessor; // rax
  __int64 v6; // r9
  _BYTE v7[208]; // [rsp+20h] [rbp-E8h] BYREF

  BYTE2(WPP_MAIN_CB.Dpc.SystemArgument1) = InputTraceLogging::Enabled(0x2000);
  if ( gProtocolType != -1 )
  {
    CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v7);
    InputTraceLogging::Win32k::SessionInfo();
    InputConfig::TraceCurrentConfig();
    CCursorClip::TraceCurrentState();
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v2, v1, v3, v4);
    if ( MouseProcessor )
      InputTraceLogging::Mouse::ButtonState(*(_DWORD *)(MouseProcessor + 3572));
    RIMSyncWalkRimObjList(
      1LL,
      0LL,
      (void (__fastcall *)(_QWORD *, __int64))lambda_7c683ce7e834e820b1e487ff164319c2_::_lambda_invoker_cdecl_,
      v6);
    if ( (unsigned int)Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage() )
      TraceRawMouseThrottlingThresholds();
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v7);
  }
}
