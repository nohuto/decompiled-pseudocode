/*
 * XREFs of PsSetProcessFaultInformation @ 0x140772EF0
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     DbgkForwardException @ 0x1407323B0 (DbgkForwardException.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14021C83C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     EtwTelemetryCoverageReport @ 0x140246D10 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x140246F08 (TelemetryCoverageStringHashInternal.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PsSetProcessTelemetryAppState @ 0x1406A51B8 (PsSetProcessTelemetryAppState.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140908638 (PspRecordCrashedProcessIntoBlackbox.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(ULONG_PTR BugCheckParameter1, int *a2)
{
  int v4; // eax
  volatile signed __int64 *v5; // rdi
  struct _KTHREAD *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  void (__fastcall **ExtensionTable)(ULONG_PTR, struct _KTHREAD *, int *); // rax
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KTHREAD *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // [rsp+48h] [rbp+10h] BYREF
  int v23; // [rsp+50h] [rbp+18h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 2172));
    v12 = *(_DWORD *)(BugCheckParameter1 + 2172);
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 2172), v12 | 4, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 4) == 0 )
    {
      if ( (unsigned int)dword_140C0EF04 < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140C0EF00 )
          dword_140C0EF00 = TelemetryCoverageStringHashInternal(off_140C0EEF8, &v22);
        EtwTelemetryCoverageReport((__int64 *)&off_140C0EEF8);
      }
      PspRecordCrashedProcessIntoBlackbox(BugCheckParameter1);
      PsSetProcessTelemetryAppState((struct _EX_RUNDOWN_REF *)BugCheckParameter1, 4);
    }
  }
  v4 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140C0EEEC < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C0EEE8 )
        dword_140C0EEE8 = TelemetryCoverageStringHashInternal(off_140C0EEE0, &v23);
      EtwTelemetryCoverageReport((__int64 *)&off_140C0EEE0);
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
      ExfTryToWakePushLock(BugCheckParameter1 + 1080);
    KeAbPostRelease(BugCheckParameter1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v15, v16, v17);
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
    KeLeaveCriticalRegionThread((__int64)v6, v7, v8, v9);
    v4 = *a2;
  }
  if ( (v4 & 8) != 0 )
  {
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    *(_BYTE *)(BugCheckParameter1 + 2171) |= 0x40u;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)v18, v19, v20, v21);
  }
  ExtensionTable = (void (__fastcall **)(ULONG_PTR, struct _KTHREAD *, int *))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  if ( ExtensionTable )
  {
    (*ExtensionTable)(BugCheckParameter1, KeGetCurrentThread(), a2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
  return 0LL;
}
