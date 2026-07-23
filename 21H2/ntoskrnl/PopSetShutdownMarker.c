/*
 * XREFs of PopSetShutdownMarker @ 0x1408E18D0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void PopSetShutdownMarker()
{
  PopBsdShutdownInProgress = 1;
}
