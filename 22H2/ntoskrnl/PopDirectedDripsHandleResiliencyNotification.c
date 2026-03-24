/*
 * XREFs of PopDirectedDripsHandleResiliencyNotification @ 0x1408E31E4
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x1407BA150 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
 *     PopDeepSleepClearDisengageReason @ 0x14034A5E0 (PopDeepSleepClearDisengageReason.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x14057C74C (PopDirectedDripsDiagPnpActionQueueAccountingUpdate.c)
 *     PopDirectedDripsResumeDevices @ 0x1408E38D0 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408E3AC8 (PopDirectedDripsSuspendDevices.c)
 */

__int64 __fastcall PopDirectedDripsHandleResiliencyNotification(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  char v3; // bp
  int v4; // r14d
  __int64 v5; // rcx

  v1 = (volatile signed __int64 *)(a1 + 136);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  v3 = *(_BYTE *)(a1 + 145);
  v4 = *(_DWORD *)(a1 + 148);
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( *(_BYTE *)(a1 + 144) != v3 )
  {
    PopDirectedDripsDiagPnpActionQueueAccountingUpdate(v5, v3);
    if ( v3 )
      PopDirectedDripsSuspendDevices(a1);
    else
      PopDirectedDripsResumeDevices(a1, 0LL);
  }
  *(_BYTE *)(a1 + 144) = v3;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  if ( *(_DWORD *)(a1 + 148) == v4 )
  {
    *(_BYTE *)(a1 + 152) = 1;
    PopQueueWorkItem(a1 + 160, DelayedWorkQueue);
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return PopDeepSleepClearDisengageReason(8u);
}
