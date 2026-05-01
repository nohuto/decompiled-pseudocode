/*
 * XREFs of ?IsEnabled@TabViewManagerMeasures@@SA_NE_K@Z @ 0x1802E10C0
 * Callers:
 *     ??$TabViewManagerCloseViewForTab@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@TabViewManagerMeasures@@SAXAEAPEAUIApplicationView@@$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@3456@@Z @ 0x1802D4D98 (--$TabViewManagerCloseViewForTab@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShel.c)
 *     ??$HotKeyHandlerMessageReceived@IPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@AEAU_GUID@@@TabViewManagerMeasures@@SAX$$QEAI$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@2345@AEAU_GUID@@@Z @ 0x1803016B8 (--$HotKeyHandlerMessageReceived@IPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUI.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x1800718B8 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180071D94 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

char __fastcall TabViewManagerMeasures::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`TabViewManagerMeasures::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v2 = &`TabViewManagerMeasures::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_180650CF8;
    qword_180650CF8 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_7ab9639d2235ac39484be6f8e25fe51c_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
