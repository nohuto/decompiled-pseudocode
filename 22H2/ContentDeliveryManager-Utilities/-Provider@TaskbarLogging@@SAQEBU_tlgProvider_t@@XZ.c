/*
 * XREFs of ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18000DE54
 * Callers:
 *     ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x18000DF54 (-Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ.c)
 *     ??R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ @ 0x18000E454 (--R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800094C0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1800CFC04 (atexit.c)
 */

const struct _tlgProvider_t *TaskbarLogging::Provider(void)
{
  void (*v0)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskbarLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019D488;
    qword_18019D488 = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    qword_18019D4A0 = (struct _tlgProvider_t *)&`TaskbarLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18019D488, qword_18019D4A0, v0);
    InitOnceComplete(&`TaskbarLogging::Instance'::`2'::wrapper, 0, &qword_18019D488);
  }
  return (const struct _tlgProvider_t *)*((_QWORD *)Context + 1);
}
