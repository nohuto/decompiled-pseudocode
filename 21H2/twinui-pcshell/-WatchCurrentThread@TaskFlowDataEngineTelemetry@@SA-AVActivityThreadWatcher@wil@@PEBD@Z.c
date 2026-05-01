/*
 * XREFs of ?WatchCurrentThread@TaskFlowDataEngineTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802A6A7C
 * Callers:
 *     _lambda_98ae2f8acbcd0270b071efd378e5a46f_::operator() @ 0x18029FA40 (_lambda_98ae2f8acbcd0270b071efd378e5a46f_--operator().c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z @ 0x18029F194 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z.c)
 */

wil::ActivityThreadWatcher *__fastcall TaskFlowDataEngineTelemetry::WatchCurrentThread(
        wil::ActivityThreadWatcher *a1,
        __int64 a2)
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  struct wil::details::IFailureCallback *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v6, (LPVOID *)&v5)
    && (_DWORD)v6 )
  {
    v5 = (struct wil::details::IFailureCallback *)qword_180650CB0;
    qword_180650CB0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180650CC8 = (struct _tlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650CB0, qword_180650CC8, v3);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_180650CB0);
  }
  wil::ActivityThreadWatcher::ActivityThreadWatcher(
    a1,
    v5,
    "TaskFlowDataEngineTelemetry.GetCurrentActivityForAllViewsAsync.AsyncOperation");
  return a1;
}
