/*
 * XREFs of ?get@?$static_lazy@VCCriticalFailureLogging@@@details@wil@@QEAAPEAVCCriticalFailureLogging@@P6AXXZ@Z @ 0x1804DC56C
 * Callers:
 *     ??1Completer@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ @ 0x1804DBE38 (--1Completer@-$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x1804DBFF0 (-ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1801A8DA0 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<CCriticalFailureLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`CCriticalFailureLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_1806520E0;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1806520E0);
    qword_1806520E0[0] = &ImmersiveIconsLogging::`vftable';
    qword_1806520F8 = (struct _tlgProvider_t *)&`CCriticalFailureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806520E0, qword_1806520F8, v3);
    InitOnceComplete(&`CCriticalFailureLogging::Instance'::`2'::wrapper, 0, qword_1806520E0);
  }
  return v6;
}
