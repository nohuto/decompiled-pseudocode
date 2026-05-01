/*
 * XREFs of ?IsEnabled@AppLaunchTelemetry@PerfTrack@@SA_NE_K@Z @ 0x180263090
 * Callers:
 *     ??$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$QEAPEBG@Z @ 0x180260A34 (--$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$Q.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180071D94 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ??1Completer@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ @ 0x18026126C (--1Completer@-$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ.c)
 */

char __fastcall PerfTrack::AppLaunchTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`PerfTrack::AppLaunchTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v2 = &`PerfTrack::AppLaunchTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_180650718;
    qword_180650718 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_15efdcdc02dcce07b3179f5b4d1fe0a3_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
