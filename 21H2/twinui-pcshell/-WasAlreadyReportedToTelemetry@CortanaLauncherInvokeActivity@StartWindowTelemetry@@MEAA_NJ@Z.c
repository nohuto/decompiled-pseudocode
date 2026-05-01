/*
 * XREFs of ?WasAlreadyReportedToTelemetry@CortanaLauncherInvokeActivity@StartWindowTelemetry@@MEAA_NJ@Z @ 0x1800AAEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::WasAlreadyReportedToTelemetry(
        StartWindowTelemetry::CortanaLauncherInvokeActivity *this,
        int a2)
{
  bool v2; // zf

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == a2;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = a2;
  return v2;
}
