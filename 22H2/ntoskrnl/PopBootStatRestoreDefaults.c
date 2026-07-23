/*
 * XREFs of PopBootStatRestoreDefaults @ 0x1408F2588
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     RtlLockBootStatusData @ 0x14077F470 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x14078C5B0 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1407C1BDC (PopBootStatAccessCheck.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409155F8 (RtlRestoreBootStatusDefaults.c)
 */

__int64 PopBootStatRestoreDefaults()
{
  KPROCESSOR_MODE PreviousMode; // bp
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v2; // esi
  HANDLE FileHandle; // [rsp+30h] [rbp+8h] BYREF

  FileHandle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v2 = RtlLockBootStatusData(&FileHandle);
  if ( v2 >= 0 )
  {
    if ( !PreviousMode || (v2 = PopBootStatAccessCheck(FileHandle, PreviousMode, 1u), v2 >= 0) )
      v2 = RtlRestoreBootStatusDefaults(FileHandle);
  }
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
  KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
