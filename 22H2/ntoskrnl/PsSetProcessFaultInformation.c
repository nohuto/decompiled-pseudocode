/*
 * XREFs of PsSetProcessFaultInformation @ 0x1407729F0
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     DbgkForwardException @ 0x140732540 (DbgkForwardException.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseExtensionTable @ 0x1402F75FC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402F7618 (ExGetExtensionTable.c)
 *     EtwTelemetryCoverageReport @ 0x140321950 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x140321B48 (TelemetryCoverageStringHashInternal.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PsSetProcessTelemetryAppState @ 0x14062B6D8 (PsSetProcessTelemetryAppState.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140908528 (PspRecordCrashedProcessIntoBlackbox.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(ULONG_PTR BugCheckParameter1, int *a2)
{
  int v4; // eax
  volatile signed __int64 *v5; // rdi
  struct _KTHREAD *v6; // rbp
  void (__fastcall **ExtensionTable)(ULONG_PTR, struct _KTHREAD *, int *); // rax
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v12; // rbp
  int v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 2172));
    v9 = *(_DWORD *)(BugCheckParameter1 + 2172);
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 2172), v9 | 4, v9);
    }
    while ( v10 != v9 );
    if ( (v9 & 4) == 0 )
    {
      if ( (unsigned int)dword_140C0EEF4 < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140C0EEF0 )
          dword_140C0EEF0 = TelemetryCoverageStringHashInternal(off_140C0EEE8, &v13);
        EtwTelemetryCoverageReport((__int64 *)&off_140C0EEE8);
      }
      PspRecordCrashedProcessIntoBlackbox(BugCheckParameter1);
      PsSetProcessTelemetryAppState((_QWORD *)BugCheckParameter1, 4);
    }
  }
  v4 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140C0EEDC < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C0EED8 )
        dword_140C0EED8 = TelemetryCoverageStringHashInternal(off_140C0EED0, &v14);
      EtwTelemetryCoverageReport((__int64 *)&off_140C0EED0);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (volatile signed __int64 *)(BugCheckParameter1 + 1080);
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
    if ( (*(_BYTE *)(BugCheckParameter1 + 2171) & 7) != 7 )
      *(_BYTE *)(BugCheckParameter1 + 2171) ^= (*(_BYTE *)(BugCheckParameter1 + 2171) ^ (*(_BYTE *)(BugCheckParameter1
                                                                                                  + 2171)
                                                                                       + 1)) & 7;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1080));
    KeAbPostRelease(BugCheckParameter1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v4 = *a2;
  }
  else
  {
    v5 = (volatile signed __int64 *)(BugCheckParameter1 + 1080);
  }
  if ( (v4 & 4) != 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    if ( (*(_BYTE *)(BugCheckParameter1 + 2171) & 0x38u) < 0x38 )
      *(_BYTE *)(BugCheckParameter1 + 2171) ^= (*(_BYTE *)(BugCheckParameter1 + 2171) ^ (*(_BYTE *)(BugCheckParameter1
                                                                                                  + 2171)
                                                                                       + 8)) & 0x38;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)v6);
    v4 = *a2;
  }
  if ( (v4 & 8) != 0 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    *(_BYTE *)(BugCheckParameter1 + 2171) |= 0x40u;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)v12);
  }
  ExtensionTable = (void (__fastcall **)(ULONG_PTR, struct _KTHREAD *, int *))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  if ( ExtensionTable )
  {
    (*ExtensionTable)(BugCheckParameter1, KeGetCurrentThread(), a2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
  return 0LL;
}
