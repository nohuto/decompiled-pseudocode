/*
 * XREFs of PnpSynchronizeDeviceEventQueue @ 0x1408729DC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140968A40 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PnpInsertNoopEvent @ 0x140680D20 (PnpInsertNoopEvent.c)
 */

NTSTATUS PnpSynchronizeDeviceEventQueue()
{
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = PnpInsertNoopEvent((__int64)&Event, (__int64)&v2);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return result;
}
