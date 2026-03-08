/*
 * XREFs of WheaInitializeServices @ 0x140B495D4
 * Callers:
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     WheapInitializeInUsePageOfflineNotifications @ 0x140810870 (WheapInitializeInUsePageOfflineNotifications.c)
 *     WheapSetDefaultErrorSourceConfiguration @ 0x140B496CC (WheapSetDefaultErrorSourceConfiguration.c)
 */

PVOID *WheaInitializeServices()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  WheapSetDefaultErrorSourceConfiguration();
  WheapPfaLock = 0LL;
  qword_140D17380 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  _InterlockedOr(v1, 0);
  WheapPfaInitialized = 1;
  WheapDispatchPtr.DeviceExtension = &WheapDispatchPtr.Vpb;
  WheapDispatchPtr.Vpb = (PVPB)&WheapDispatchPtr.Vpb;
  *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels = &WheapDispatchPtr.Queue.ListEntry.Blink;
  WheapDispatchPtr.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink;
  qword_140C2C678 = (__int64)WheapDeferredRecoveryServiceDpcRoutine;
  WheaDrsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapDeferredRecoveryServiceWorker;
  LODWORD(WheapDispatchPtr.AttachedDevice) = 1;
  WheapDispatchPtr.CurrentIrp = 0LL;
  LODWORD(WheapDispatchPtr.Timer) = 0;
  LOWORD(WheapDispatchPtr.Flags) = 1;
  BYTE2(WheapDispatchPtr.Flags) = 6;
  WheapDispatchPtr.Characteristics = 0;
  WheaPassiveDrsListLock = 0LL;
  LODWORD(WheaDrsDpc) = 275;
  qword_140C2C680 = 0LL;
  qword_140C2C698 = 0LL;
  qword_140C2C670 = 0LL;
  WheaDrsWorkItem.Parameter = 0LL;
  WheaDrsWorkItem.List.Flink = 0LL;
  _InterlockedOr(v1, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
