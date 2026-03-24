/*
 * XREFs of UserIsRemoteAndNotDisconnectConnection @ 0x1C001EB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsRemoteAndNotDisconnectConnection()
{
  return (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu;
}
