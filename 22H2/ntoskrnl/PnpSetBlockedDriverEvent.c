/*
 * XREFs of PnpSetBlockedDriverEvent @ 0x1409646E0
 * Callers:
 *     PnpPrepareDriverLoading @ 0x14068F654 (PnpPrepareDriverLoading.c)
 * Callees:
 *     PnpInsertEventInQueue @ 0x140786840 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x14079487C (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetBlockedDriverEvent(_OWORD *a1)
{
  __int64 DeviceEventEntry; // rax

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  DeviceEventEntry = PnpCreateDeviceEventEntry(0xC0u);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_DWORD *)(DeviceEventEntry + 128) = 7;
  *(_DWORD *)(DeviceEventEntry + 148) = 80;
  *(GUID *)(DeviceEventEntry + 112) = GUID_DRIVER_BLOCKED;
  *(_OWORD *)(DeviceEventEntry + 160) = *a1;
  return PnpInsertEventInQueue(DeviceEventEntry);
}
