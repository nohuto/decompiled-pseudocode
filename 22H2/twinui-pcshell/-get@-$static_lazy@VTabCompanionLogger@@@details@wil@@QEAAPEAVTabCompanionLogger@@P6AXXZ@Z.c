/*
 * XREFs of ?get@?$static_lazy@VTabCompanionLogger@@@details@wil@@QEAAPEAVTabCompanionLogger@@P6AXXZ@Z @ 0x18030CE00
 * Callers:
 *     ??$TabWindowSnapped@AEAIAEAU_GUID@@PEBGI@TabCompanionTelemetry@@SAXAEAIAEAU_GUID@@$$QEAPEBG$$QEAI@Z @ 0x180309AC0 (--$TabWindowSnapped@AEAIAEAU_GUID@@PEBGI@TabCompanionTelemetry@@SAXAEAIAEAU_GUID@@$$QEAPEBG$$QEA.c)
 *     ?TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicationView@@PEAUIShellTab@2345@W4WINDOW_SNAP_STATE@@@Z @ 0x18030C430 (-TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicat.c)
 *     ?WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18030C710 (-WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicat.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<TabCompanionLogger>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`TabCompanionLogger::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_180650D38;
    qword_180650D38[0] = &ShellScreenClippingLogging::`vftable';
    qword_180650D50 = (struct _tlgProvider_t *)&`TabCompanionLogger::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650D38, qword_180650D50, v3);
    InitOnceComplete(&`TabCompanionLogger::Instance'::`2'::wrapper, 0, qword_180650D38);
  }
  return v6;
}
