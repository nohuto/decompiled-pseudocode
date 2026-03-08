/*
 * XREFs of EtwpCoverageProvEnableCallback @ 0x14085DE70
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     EtwTelemetryCoverageReport @ 0x1402F9DD0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1402F9F5C (TelemetryCoverageStringHashInternal.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 */

char EtwpCoverageProvEnableCallback()
{
  unsigned __int8 v0; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  char v3; // di
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_140C042F0 && tlgKeywordOn((__int64)&dword_140C042F0, 1LL) )
  {
    v0 = 1;
    if ( !EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140C093BC < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C093B8 )
        dword_140C093B8 = TelemetryCoverageStringHashInternal(off_140C093B0, v5);
      EtwTelemetryCoverageReport((__int64 *)&off_140C093B0);
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
