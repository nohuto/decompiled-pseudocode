/*
 * XREFs of ?Provider@NotificationCenterLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18001DFD0
 * Callers:
 *     ?FlyoutHeight@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18009A3F8 (-FlyoutHeight@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 *     ??$EM_ToastCenterWindowSize@AEBHAEAHJJ@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBHAEAH$$QEAJ2@Z @ 0x18009A774 (--$EM_ToastCenterWindowSize@AEBHAEAHJJ@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

const struct _tlgProvider_t *NotificationCenterLogging::Provider(void)
{
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180650668;
    qword_180650668 = &ShellScreenClippingLogging::`vftable';
    qword_180650680 = (struct _tlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180650668, qword_180650680, v1);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &qword_180650668);
  }
  return (const struct _tlgProvider_t *)*((_QWORD *)Context + 1);
}
