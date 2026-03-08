/*
 * XREFs of PopFxClearDirectedDripsCandidateDeviceList @ 0x14058703C
 * Callers:
 *     PopDirectedDripsEngage @ 0x140584A94 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsResumeDevices @ 0x140980BC4 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

void PopFxClearDirectedDripsCandidateDeviceList()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    _InterlockedAnd((volatile signed __int32 *)(i + 824), 0xFFFFFFBF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxBlockingDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxBlockingDeviceListLock);
  KeLeaveCriticalRegion();
}
