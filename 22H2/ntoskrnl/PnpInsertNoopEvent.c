/*
 * XREFs of PnpInsertNoopEvent @ 0x1405CEEA0
 * Callers:
 *     PnpDeferNotification @ 0x14069C3B4 (PnpDeferNotification.c)
 *     PipProcessDevNodeTree @ 0x14073D6A4 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpInsertEventInQueue @ 0x140634C88 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x14071B5A8 (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpInsertNoopEvent(__int64 a1, __int64 a2)
{
  __int64 DeviceEventEntry; // rax

  DeviceEventEntry = PnpCreateDeviceEventEntry(0xC0uLL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_QWORD *)(DeviceEventEntry + 24) = a1;
  *(_DWORD *)(DeviceEventEntry + 128) = 1;
  *(_QWORD *)(DeviceEventEntry + 136) = a2;
  *(GUID *)(DeviceEventEntry + 112) = GUID_DEVICE_NOOP;
  *(_DWORD *)(DeviceEventEntry + 148) = 80;
  return PnpInsertEventInQueue(DeviceEventEntry);
}
