/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x140813664
 * Callers:
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 *     PipInitializeCoreDriversByGroup @ 0x140B3FE48 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 *     PnpWaitForDevicesToStart @ 0x140B41B00 (PnpWaitForDevicesToStart.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
