/*
 * XREFs of WheaInitializeServices @ 0x140B26BAC
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     WheapInitializeInUsePageOfflineNotifications @ 0x140857B64 (WheapInitializeInUsePageOfflineNotifications.c)
 */

PVOID *WheaInitializeServices()
{
  __int64 (**v0)(); // rax
  __int64 v1; // rcx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = (__int64 (**)())&unk_140D00C60;
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
  qword_140D010A0 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  WheapPfaLock = 0LL;
  _InterlockedOr(v3, 0);
  WheapPfaInitialized = 1;
  WheapDispatchPtr.DeviceExtension = &WheapDispatchPtr.Vpb;
  WheapDispatchPtr.Vpb = (PVPB)&WheapDispatchPtr.Vpb;
  *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels = &WheapDispatchPtr.Queue.ListEntry.Blink;
  WheapDispatchPtr.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink;
  qword_140C10B58 = (__int64)WheapDeferredRecoveryServiceDpcRoutine;
  WheaDrsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapDeferredRecoveryServiceWorker;
  LODWORD(WheapDispatchPtr.AttachedDevice) = 1;
  WheapDispatchPtr.CurrentIrp = 0LL;
  LODWORD(WheapDispatchPtr.Timer) = 0;
  LOWORD(WheapDispatchPtr.Flags) = 1;
  BYTE2(WheapDispatchPtr.Flags) = 6;
  WheapDispatchPtr.Characteristics = 0;
  WheaPassiveDrsListLock = 0LL;
  LODWORD(WheaDrsDpc) = 275;
  qword_140C10B60 = 0LL;
  qword_140C10B78 = 0LL;
  qword_140C10B50 = 0LL;
  WheaDrsWorkItem.Parameter = 0LL;
  WheaDrsWorkItem.List.Flink = 0LL;
  _InterlockedOr(v3, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
