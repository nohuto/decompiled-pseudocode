/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x14081BD08
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x140B5780C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
