/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x140813638
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x140B3FE48 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
