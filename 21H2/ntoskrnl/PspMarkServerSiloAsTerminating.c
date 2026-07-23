/*
 * XREFs of PspMarkServerSiloAsTerminating @ 0x14090B890
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x14060A430 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     PspGetServerSiloStatePointer @ 0x1405811E8 (PspGetServerSiloStatePointer.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1409361EC (EtwTraceJobServerSiloStateChange.c)
 */

char __fastcall PspMarkServerSiloAsTerminating(__int64 a1)
{
  __int64 ServerSiloStatePointer; // rax
  struct _KTHREAD *CurrentThread; // rdx
  volatile signed __int32 *v4; // rbx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  ServerSiloStatePointer = PspGetServerSiloStatePointer(a1);
  CurrentThread = KeGetCurrentThread();
  v4 = (volatile signed __int32 *)ServerSiloStatePointer;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  v5 = *v4;
  do
  {
    if ( v5 >= 3 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    v6 = v5;
    v5 = _InterlockedCompareExchange(v4, 3, v5);
  }
  while ( v6 != v5 );
  EtwTraceJobServerSiloStateChange(a1, 3LL);
  v7 = 1;
LABEL_5:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  return v7;
}
