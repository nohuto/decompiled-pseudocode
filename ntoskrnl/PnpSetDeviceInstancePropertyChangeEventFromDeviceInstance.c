/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1403B1B9C
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x1403B1B80 (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     PiCMSetObjectProperty @ 0x14078B060 (PiCMSetObjectProperty.c)
 *     PiCMDeleteDevice @ 0x140965ED8 (PiCMDeleteDevice.c)
 *     PiCMSetRegistryProperty @ 0x140967BA4 (PiCMSetRegistryProperty.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x140688A98 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x140688D90 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(unsigned __int16 *a1)
{
  int v2; // esi
  __int64 DeviceEventEntry; // rax
  __int64 v4; // rbx
  const void *v5; // rdx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v2 = *a1 + 82;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*a1 + 194);
  v4 = DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_QWORD *)(DeviceEventEntry + 24) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 16) = 0;
  *(GUID *)(DeviceEventEntry + 112) = GUID_DEVICE_PROPERTY_CHANGED;
  *(_QWORD *)(DeviceEventEntry + 48) = 0LL;
  *(_QWORD *)(DeviceEventEntry + 56) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 128) = 9;
  *(_QWORD *)(DeviceEventEntry + 136) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 144) = 0;
  *(_DWORD *)(DeviceEventEntry + 148) = v2;
  *(_QWORD *)(DeviceEventEntry + 152) = 0LL;
  v5 = (const void *)*((_QWORD *)a1 + 1);
  if ( v5 )
    memmove((void *)(DeviceEventEntry + 160), v5, *a1);
  *(_WORD *)(v4 + 2 * ((unsigned __int64)*a1 >> 1) + 160) = 0;
  return PnpInsertEventInQueue(v4);
}
