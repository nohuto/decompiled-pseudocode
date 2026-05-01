/*
 * XREFs of ?get@?$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z @ 0x18014556C
 * Callers:
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DC5C (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<PinManagerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID v5; // [rsp+20h] [rbp-28h] BYREF
  WINBOOL v6; // [rsp+28h] [rbp-20h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`PinManagerTelemetry::Instance'::`2'::wrapper, 0, &v6, &v5) && v6 )
  {
    v5 = &qword_1806511E8;
    qword_1806511E8 = &MultitaskingViewTelemetry::`vftable';
    qword_180651200 = (struct _tlgProvider_t *)&`PinManagerTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1806511E8, qword_180651200, v3);
    InitOnceComplete(&`PinManagerTelemetry::Instance'::`2'::wrapper, 0, &qword_1806511E8);
  }
  return v5;
}
