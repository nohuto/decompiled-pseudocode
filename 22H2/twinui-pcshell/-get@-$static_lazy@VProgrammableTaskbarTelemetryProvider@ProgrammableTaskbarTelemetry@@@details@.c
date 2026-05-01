/*
 * XREFs of ?get@?$static_lazy@VProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@@details@wil@@QEAAPEAVProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@P6AXXZ@Z @ 0x18015EF0C
 * Callers:
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x180152304 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4PinningEventType@1@AEAI$$QEAPEBG@Z @ 0x180152374 (--$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTel.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _QWORD *v5; // [rsp+20h] [rbp-28h] BYREF
  WINBOOL v6; // [rsp+28h] [rbp-20h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(
         &`ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::Instance'::`2'::wrapper,
         0,
         &v6,
         (LPVOID *)&v5)
    && v6 )
  {
    v5 = qword_180652180;
    qword_180652180[0] = &MultitaskingViewTelemetry::`vftable';
    qword_180652198 = (struct _tlgProvider_t *)&`ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180652180, qword_180652198, v3);
    InitOnceComplete(
      &`ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::Instance'::`2'::wrapper,
      0,
      qword_180652180);
  }
  return v5;
}
