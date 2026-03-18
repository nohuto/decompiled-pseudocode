/*
 * XREFs of WheaInitializeServices @ 0x140B69138
 * Callers:
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     WheapInitializeInUsePageOfflineNotifications @ 0x140850CB8 (WheapInitializeInUsePageOfflineNotifications.c)
 *     WheapSetDefaultErrorSourceConfiguration @ 0x140B69230 (WheapSetDefaultErrorSourceConfiguration.c)
 */

PVOID *WheaInitializeServices()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  WheapSetDefaultErrorSourceConfiguration();
  WheapPfaLock = 0LL;
  qword_140D17740 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  _InterlockedOr(v1, 0);
  WheapPfaInitialized = 1;
  WheapDispatchPtr.DeviceExtension = &WheapDispatchPtr.Vpb;
  WheapDispatchPtr.Vpb = (PVPB)&WheapDispatchPtr.Vpb;
  WheapDispatchPtr.NextDevice = (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DriverObject;
  WheapDispatchPtr.DriverObject = (struct _DRIVER_OBJECT *)&WheapDispatchPtr.DriverObject;
  qword_140C2CAF8 = (__int64)WheapDeferredRecoveryServiceDpcRoutine;
  WheaDrsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapDeferredRecoveryServiceWorker;
  LODWORD(WheapDispatchPtr.AttachedDevice) = 1;
  WheapDispatchPtr.CurrentIrp = 0LL;
  LODWORD(WheapDispatchPtr.Timer) = 0;
  LOWORD(WheapDispatchPtr.Flags) = 1;
  BYTE2(WheapDispatchPtr.Flags) = 6;
  WheapDispatchPtr.Characteristics = 0;
  WheaPassiveDrsListLock = 0LL;
  LODWORD(WheaDrsDpc) = 275;
  qword_140C2CB00 = 0LL;
  qword_140C2CB18 = 0LL;
  qword_140C2CAF0 = 0LL;
  WheaDrsWorkItem.Parameter = 0LL;
  WheaDrsWorkItem.List.Flink = 0LL;
  _InterlockedOr(v1, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
