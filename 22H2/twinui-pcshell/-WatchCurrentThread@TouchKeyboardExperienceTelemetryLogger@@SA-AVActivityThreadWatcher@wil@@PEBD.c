/*
 * XREFs of ?WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1803D5668
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1803CC168 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 * Callees:
 *     atexit @ 0x180090164 (atexit.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z @ 0x18029EFCC (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z.c)
 *     ??1Completer@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ @ 0x1803C9F90 (--1Completer@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ.c)
 */

wil::ActivityThreadWatcher *__fastcall TouchKeyboardExperienceTelemetryLogger::WatchCurrentThread(
        wil::ActivityThreadWatcher *a1,
        __int64 a2)
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  struct wil::details::IFailureCallback *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(
         &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v7,
         (LPVOID *)&v6)
    && (_DWORD)v7 )
  {
    v4 = &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper;
    v6 = (struct wil::details::IFailureCallback *)&qword_180650EA8;
    qword_180650EA8 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::Completer::~Completer((__int64)&v4);
  }
  wil::ActivityThreadWatcher::ActivityThreadWatcher(a1, v6, "TabTipAdapter::ExecuteDeferredRequest");
  return a1;
}
