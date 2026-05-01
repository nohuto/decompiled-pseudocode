/*
 * XREFs of ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x180071584
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1800141AC (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1803A50A0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAAPEAVStartWindowTelemetry@@P6AXXZ@Z @ 0x1800715A8 (-get@-$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAAPEAVStartWindowTelemetry@@P6AXXZ@Z.c)
 */

bool __fastcall StartWindowTelemetry::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax
  unsigned __int64 v2; // r8

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<StartWindowTelemetry>::get(
                                      a1,
                                      _lambda_7be3e90a96589580164e7896806c54b3_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, 0, v2);
}
