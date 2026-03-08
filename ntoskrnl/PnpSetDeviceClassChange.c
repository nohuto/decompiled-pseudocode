/*
 * XREFs of PnpSetDeviceClassChange @ 0x140683CA4
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x140688A98 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x140688D90 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetDeviceClassChange(_OWORD *a1, _OWORD *a2, const void **a3)
{
  int v6; // edi
  __int64 DeviceEventEntry; // rax
  __int64 v8; // rbx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v6 = *(unsigned __int16 *)a3 + 80;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)a3 + 192);
  v8 = DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225495LL;
  *(_OWORD *)(DeviceEventEntry + 112) = *a1;
  *(_DWORD *)(DeviceEventEntry + 128) = 2;
  *(_DWORD *)(DeviceEventEntry + 148) = v6;
  *(_OWORD *)(DeviceEventEntry + 160) = *a2;
  memmove((void *)(DeviceEventEntry + 176), a3[1], *(unsigned __int16 *)a3);
  *(_WORD *)(v8 + 2 * ((unsigned __int64)*(unsigned __int16 *)a3 >> 1) + 176) = 0;
  return PnpInsertEventInQueue(v8);
}
