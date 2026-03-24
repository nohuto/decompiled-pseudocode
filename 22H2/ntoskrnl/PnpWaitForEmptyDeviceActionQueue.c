/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x1407ACB04
 * Callers:
 *     PopGracefulShutdown @ 0x1409B10A0 (PopGracefulShutdown.c)
 *     PnpWaitForDevicesToStart @ 0x140A5D40C (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A5D42C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A5DB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
