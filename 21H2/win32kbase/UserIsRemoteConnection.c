/*
 * XREFs of UserIsRemoteConnection @ 0x1C00256E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsRemoteConnection()
{
  return gProtocolType != 0;
}
