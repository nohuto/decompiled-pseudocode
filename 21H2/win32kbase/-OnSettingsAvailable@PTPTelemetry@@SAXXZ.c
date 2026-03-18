/*
 * XREFs of ?OnSettingsAvailable@PTPTelemetry@@SAXXZ @ 0x1C00DCD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PTPTelemetry::OnSettingsAvailable(void)
{
  PTPTelemetry::s_SettingsReady = 1;
}
