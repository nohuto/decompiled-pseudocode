/*
 * XREFs of ?get@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemetry@@P6AXXZ@Z @ 0x180006E8C
 * Callers:
 *     ?FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180006E50 (-FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x180006F68 (--1Completer@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180053BDC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<WindowFrameLoggingTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v6, (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper;
    v7 = &qword_1800E6A28;
    qword_1800E6A28 = (__int64)&WindowFrameLogging::`vftable';
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<WindowFrameLoggingTelemetry>::Completer::~Completer(&v4);
  }
  return v7;
}
