/*
 * XREFs of PopPowerButtonBugcheckConfigure @ 0x14081BE48
 * Callers:
 *     PopPowerButtonBugcheckWatchCallback @ 0x140808C90 (PopPowerButtonBugcheckWatchCallback.c)
 *     PopInitializePowerButtonHold @ 0x140B034C0 (PopInitializePowerButtonHold.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PopQueryPowerButtonConfiguration @ 0x1403B5688 (PopQueryPowerButtonConfiguration.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 */

char __fastcall PopPowerButtonBugcheckConfigure(HANDLE KeyHandle, char a2, _BYTE *a3)
{
  char v3; // bl
  struct _KTHREAD *CurrentThread; // rax
  char v7; // si
  char result; // al
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0;
  IoStatusBlock = 0LL;
  if ( !a2
    || ZwNotifyChangeKey(
         KeyHandle,
         0LL,
         PopPowerButtonBugcheckWatchWorkItem,
         (PVOID)1,
         &IoStatusBlock,
         4u,
         0,
         0LL,
         0,
         1u) < 0 )
  {
    v3 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPowerButtonBugcheckLock, 0LL);
  PopQueryPowerButtonConfiguration(KeyHandle, a3);
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v3 )
    return ZwClose(KeyHandle);
  return result;
}
