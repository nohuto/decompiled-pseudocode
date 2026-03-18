/*
 * XREFs of UserIsConsoleConnection @ 0x1C0071D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsConsoleConnection()
{
  return gProtocolType == 0;
}
