/*
 * XREFs of WheaInitializeServices @ 0x140A6D554
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     WheapInitializeInUsePageOfflineNotifications @ 0x1407C8148 (WheapInitializeInUsePageOfflineNotifications.c)
 */

PVOID *WheaInitializeServices()
{
  __int64 (**v0)(); // rax
  __int64 v1; // rcx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = (__int64 (**)())&unk_140CF4790;
  v1 = 17LL;
  do
  {
    *(v0 - 2) = 0LL;
    *v0 = HalSystemVectorDispatchEntry;
    v0[1] = xHalPciEarlyRestore;
    v0[2] = (__int64 (*)())WheapDefaultErrSrcCreateRecord;
    v0[3] = HalSystemVectorDispatchEntry;
    v0[4] = (__int64 (*)())xHalTimerWatchdogStop;
    v0[5] = 0LL;
    v0 += 8;
    --v1;
  }
  while ( v1 );
  WheapConfigTableLock = 0LL;
  qword_140CF4BD0 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  WheapPfaLock = 0LL;
  _InterlockedOr(v3, 0);
  WheapPfaInitialized = 1;
  WheapDispatchPtr.Queue.ListEntry.Flink = (struct _LIST_ENTRY *)&WheapDispatchPtr.DeviceType;
  *(_QWORD *)&WheapDispatchPtr.DeviceType = &WheapDispatchPtr.DeviceType;
  WheapDispatchPtr.NextDevice = (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DriverObject;
  WheapDispatchPtr.DriverObject = (struct _DRIVER_OBJECT *)&WheapDispatchPtr.DriverObject;
  qword_140C16058 = (__int64)WheapDeferredRecoveryServiceDpcRoutine;
  WheaDrsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapDeferredRecoveryServiceWorker;
  LODWORD(WheapDispatchPtr.Timer) = 1;
  *(_QWORD *)&WheapDispatchPtr.Flags = 0LL;
  LODWORD(WheapDispatchPtr.Vpb) = 0;
  LOWORD(WheapDispatchPtr.DeviceExtension) = 1;
  BYTE2(WheapDispatchPtr.DeviceExtension) = 6;
  HIDWORD(WheapDispatchPtr.DeviceExtension) = 0;
  WheaPassiveDrsListLock = 0LL;
  LODWORD(WheaDrsDpc) = 275;
  qword_140C16060 = 0LL;
  qword_140C16078 = 0LL;
  qword_140C16050 = 0LL;
  WheaDrsWorkItem.Parameter = 0LL;
  WheaDrsWorkItem.List.Flink = 0LL;
  _InterlockedOr(v3, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
