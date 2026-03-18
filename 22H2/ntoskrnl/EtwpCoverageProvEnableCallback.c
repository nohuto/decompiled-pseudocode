/*
 * XREFs of EtwpCoverageProvEnableCallback @ 0x140861CE0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     EtwTelemetryCoverageReport @ 0x140364BF0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x140364D7C (TelemetryCoverageStringHashInternal.c)
 */

_QWORD *EtwpCoverageProvEnableCallback()
{
  unsigned __int8 v0; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  char v3; // di
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_140C04320 && tlgKeywordOn((__int64)&dword_140C04320, 1LL) )
  {
    v0 = 1;
    if ( !EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140C093DC < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C093D8 )
        dword_140C093D8 = TelemetryCoverageStringHashInternal(off_140C093D0, v5);
      EtwTelemetryCoverageReport((__int64 *)&off_140C093D0);
    }
  }
  else
  {
    v0 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
  v2 = EtwpCoverageContext;
  if ( EtwpCoverageContext && EtwpCoverageCoreTracingEnabled != v0 )
  {
    if ( v0 )
    {
      *(_DWORD *)(MmWriteableSharedUserData + 892) = -256;
      *(_WORD *)(*(_QWORD *)(v2 + 16) + 2LL) |= 1u;
    }
    else
    {
      *(_DWORD *)(MmWriteableSharedUserData + 892) = *(_DWORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 24LL);
      *(_WORD *)(*(_QWORD *)(v2 + 16) + 2LL) &= ~1u;
    }
  }
  EtwpCoverageLockOwner = 0LL;
  EtwpCoverageCoreTracingEnabled = v0;
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
