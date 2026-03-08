/*
 * XREFs of UnlockUpdatesForDwm @ 0x1C00D4AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void UnlockUpdatesForDwm()
{
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 0;
}
