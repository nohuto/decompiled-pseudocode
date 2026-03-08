/*
 * XREFs of PnpInitializeDeviceEvents @ 0x140B705C0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     KiInitializeMutant @ 0x1402D981C (KiInitializeMutant.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 PnpInitializeDeviceEvents()
{
  unsigned int v0; // ebx
  __int64 Pool2; // rax
  __int64 v2; // rcx

  v0 = 0;
  Pool2 = ExAllocatePool2(64LL, 0x88uLL, 0x4A706E50u);
  PnpDeviceEventList = Pool2;
  if ( Pool2 )
  {
    KiInitializeMutant(Pool2 + 8, 0, 1, 0);
    v2 = PnpDeviceEventList;
    *(_DWORD *)(PnpDeviceEventList + 64) = 1;
    *(_QWORD *)(v2 + 72) = 0LL;
    *(_DWORD *)(v2 + 80) = 0;
    *(_QWORD *)(v2 + 104) = v2 + 96;
    *(_QWORD *)(v2 + 96) = v2 + 96;
    *(_WORD *)(v2 + 88) = 1;
    *(_BYTE *)(v2 + 90) = 6;
    *(_DWORD *)(v2 + 92) = 0;
    *(_QWORD *)(v2 + 128) = v2 + 120;
    *(_QWORD *)(v2 + 120) = v2 + 120;
    *(_DWORD *)v2 = 259;
    PnpNotificationInProgressLock.Event.Header.WaitListHead.Blink = &PnpNotificationInProgressLock.Event.Header.WaitListHead;
    PnpNotificationInProgressLock.Event.Header.WaitListHead.Flink = &PnpNotificationInProgressLock.Event.Header.WaitListHead;
    PnpEventQueueEmpty.Header.WaitListHead.Blink = &PnpEventQueueEmpty.Header.WaitListHead;
    PnpEventQueueEmpty.Header.WaitListHead.Flink = &PnpEventQueueEmpty.Header.WaitListHead;
    PnpNotificationInProgressLock.Count = 1;
    PnpNotificationInProgressLock.Owner = 0LL;
    PnpNotificationInProgressLock.Contention = 0;
    LOWORD(PnpNotificationInProgressLock.Event.Header.Lock) = 1;
    PnpNotificationInProgressLock.Event.Header.Size = 6;
    PnpNotificationInProgressLock.Event.Header.SignalState = 0;
    LOWORD(PnpEventQueueEmpty.Header.Lock) = 0;
    PnpEventQueueEmpty.Header.Size = 6;
    PnpEventQueueEmpty.Header.SignalState = 1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
