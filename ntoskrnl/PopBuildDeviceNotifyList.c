/*
 * XREFs of PopBuildDeviceNotifyList @ 0x140AA3FCC
 * Callers:
 *     PoInitializeBroadcast @ 0x140988BE4 (PoInitializeBroadcast.c)
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140237DB0 (KeInitializeTimerEx.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IoBuildPoDeviceNotifyList @ 0x140A9B078 (IoBuildPoDeviceNotifyList.c)
 */

void __fastcall PopBuildDeviceNotifyList(char *a1, int a2)
{
  struct _KEVENT Event; // [rsp+38h] [rbp-49h] BYREF
  struct _KDPC Dpc; // [rsp+58h] [rbp-29h] BYREF
  struct _KTIMER Timer; // [rsp+98h] [rbp+17h] BYREF

  memset(&Dpc, 0, 60);
  memset(&Event, 0, sizeof(Event));
  memset(&Timer, 0, sizeof(Timer));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeTimerEx(&Timer, NotificationTimer);
  KeInitializeDpc(&Dpc, PopBuildDeviceNotifyListWatchdog, &Event);
  if ( (a2 & 4) == 0 && (_DWORD)PopWatchdogSleepTimeout )
    KiSetTimerEx((__int64)&Timer, -10000000LL * (int)PopWatchdogSleepTimeout, 0, 0, (__int64)&Dpc);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST);
  IoBuildPoDeviceNotifyList(a1, a2);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST_END);
  if ( (a2 & 4) == 0 && (_DWORD)PopWatchdogSleepTimeout && !KeCancelTimer(&Timer) )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
}
