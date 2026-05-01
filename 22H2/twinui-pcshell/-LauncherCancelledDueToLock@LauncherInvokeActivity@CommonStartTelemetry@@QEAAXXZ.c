/*
 * XREFs of ?LauncherCancelledDueToLock@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x1803A44E4
 * Callers:
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x1803A4F48 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToLock(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  WINBOOL v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-38h] BYREF

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v6 = qword_180650E18;
    qword_180650E18[0] = &ShellScreenClippingLogging::`vftable';
    qword_180650E30 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650E18, qword_180650E30, v2);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, qword_180650E18);
  }
  v3 = (_DWORD *)v6[1];
  if ( *v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x200000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(
        v4,
        (unsigned __int8 *)dword_1805911F1,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        0LL,
        2u,
        &v7);
  }
}
