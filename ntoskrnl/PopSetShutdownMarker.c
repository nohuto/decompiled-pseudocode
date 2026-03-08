/*
 * XREFs of PopSetShutdownMarker @ 0x14097E48C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void PopSetShutdownMarker()
{
  PopBsdShutdownInProgress = 1;
}
