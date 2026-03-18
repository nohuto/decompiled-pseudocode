/*
 * XREFs of IsLogonConnected @ 0x1C01468F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsLogonConnected()
{
  return gWinLogonRpcHandle != 0LL;
}
