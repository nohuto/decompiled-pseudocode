/*
 * XREFs of IsDwmApiPortRegistered @ 0x1C00D4460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsDwmApiPortRegistered()
{
  return WPP_MAIN_CB.Queue.Wcb.DeviceContext != 0LL;
}
