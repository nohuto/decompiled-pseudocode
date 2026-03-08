/*
 * XREFs of UserIsDisconnectConnection @ 0x1C00204E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsDisconnectConnection()
{
  return gProtocolType == -1;
}
