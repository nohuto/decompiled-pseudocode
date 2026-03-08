/*
 * XREFs of PnpSetDeviceInstanceRemovalEvent @ 0x1403D071C
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x140862FDC (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x140688A98 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x140688D90 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetDeviceInstanceRemovalEvent(__int64 a1)
{
  int v2; // esi
  __int64 DeviceEventEntry; // rax
  __int64 v4; // rbx
  const void *v5; // rdx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v2 = *(unsigned __int16 *)(a1 + 40) + 82;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)(a1 + 40) + 194);
  v4 = DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_QWORD *)(DeviceEventEntry + 24) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 16) = 0;
  *(GUID *)(DeviceEventEntry + 112) = GUID_DEVINST_REMOVE_COMPLETE;
  *(_QWORD *)(DeviceEventEntry + 48) = 0LL;
  *(_QWORD *)(DeviceEventEntry + 56) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 128) = 10;
  *(_QWORD *)(DeviceEventEntry + 136) = 0LL;
  *(_DWORD *)(DeviceEventEntry + 144) = 0;
  *(_DWORD *)(DeviceEventEntry + 148) = v2;
  *(_QWORD *)(DeviceEventEntry + 152) = 0LL;
  v5 = *(const void **)(a1 + 48);
  if ( v5 )
    memmove((void *)(DeviceEventEntry + 160), v5, *(unsigned __int16 *)(a1 + 40));
  *(_WORD *)(v4 + 2 * ((unsigned __int64)*(unsigned __int16 *)(a1 + 40) >> 1) + 160) = 0;
  return PnpInsertEventInQueue(v4);
}
