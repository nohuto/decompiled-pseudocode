/*
 * XREFs of RtlUnlockBootStatusData @ 0x14073D1B0
 * Callers:
 *     PopBootStatGet @ 0x14073D308 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x14073D9E0 (PopBootStatSet.c)
 *     PopBootStatCheckIntegrity @ 0x14084B00C (PopBootStatCheckIntegrity.c)
 *     PoClearTransitionMarker @ 0x14085A768 (PoClearTransitionMarker.c)
 *     PopBootStatRestoreDefaults @ 0x1409940B0 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x140994190 (PopBootStatUnlock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwFsControlFile @ 0x140412A30 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlUnlockBootStatusData(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // eax
  char v4; // si
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  IoStatusBlock = 0LL;
  InputBuffer = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RtlpBootStatHandleLock, 0LL);
  if ( !BootStatReferenceCount )
    goto LABEL_9;
  v3 = BootStatReferenceCount - 1;
  v4 = 0;
  --BootStatReferenceCount;
  if ( !BootStatFileHandleAcquired )
    goto LABEL_7;
  if ( !Handle )
  {
    Handle = BootStatFileHandle;
LABEL_6:
    BootStatReferenceCount = 0;
    v4 = 1;
    BootStatFileHandle = 0LL;
    BootStatFileHandleAcquired = 0;
    BootStatKeepHandleOpen = 0;
LABEL_7:
    if ( !Handle )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( !BootStatKeepHandleOpen && !v3 )
    goto LABEL_6;
LABEL_8:
  ZwFsControlFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 2u, 0LL, 0);
  if ( v4 )
  {
    if ( BootStatDataCache )
    {
      ExFreePoolWithTag(BootStatDataCache, 0);
      BootStatDataCache = 0LL;
    }
    ZwClose(Handle);
  }
LABEL_9:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RtlpBootStatHandleLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RtlpBootStatHandleLock);
  KeAbPostRelease((ULONG_PTR)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
}
