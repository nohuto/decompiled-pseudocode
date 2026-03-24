/*
 * XREFs of RIMIsDeviceArbitrationEnabled @ 0x1C015A710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 RIMIsDeviceArbitrationEnabled()
{
  return gDeviceArbitrationType != 0;
}
