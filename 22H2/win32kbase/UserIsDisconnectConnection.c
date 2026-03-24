/*
 * XREFs of UserIsDisconnectConnection @ 0x1C001FFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsDisconnectConnection()
{
  return gProtocolType == -1;
}
