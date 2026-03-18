/*
 * XREFs of PsSetProcessFaultInformation @ 0x1406D40C0
 * Callers:
 *     DbgkForwardException @ 0x1406EA7D0 (DbgkForwardException.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x14024F664 (TelemetryCoverageStringHashInternal.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExReleaseExtensionTable @ 0x1403614E0 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1406D4270 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PsSetProcessTelemetryAppState @ 0x14071147C (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(ULONG_PTR a1, int *a2)
{
  int v4; // eax
  volatile signed __int64 *v5; // rdi
  void (__fastcall **ExtensionTable)(ULONG_PTR, struct _KTHREAD *, int *); // rax
  struct _KTHREAD *v8; // rbp
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  struct _KTHREAD *v11; // rbp
  struct _KTHREAD *CurrentThread; // rbp
  int v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 2172));
    v9 = *(_DWORD *)(a1 + 2172);
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2172), v9 | 4, v9);
    }
    while ( v10 != v9 );
    if ( (v9 & 4) == 0 )
    {
      if ( (unsigned int)dword_140C0308C < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140C03088 )
          dword_140C03088 = TelemetryCoverageStringHashInternal(off_140C03080, &v13);
        EtwTelemetryCoverageReport((__int64 *)&off_140C03080);
      }
      PspRecordCrashedProcessIntoBlackbox(a1);
      PsSetProcessTelemetryAppState(a1);
    }
  }
  v4 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140C0905C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C09058 )
        dword_140C09058 = TelemetryCoverageStringHashInternal(off_140C09050, &v14);
      EtwTelemetryCoverageReport((__int64 *)&off_140C09050);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (volatile signed __int64 *)(a1 + 1080);
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    if ( (*(_BYTE *)(a1 + 2171) & 7) != 7 )
      *(_BYTE *)(a1 + 2171) ^= (*(_BYTE *)(a1 + 2171) ^ (*(_BYTE *)(a1 + 2171) + 1)) & 7;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1080);
    KeAbPostRelease(a1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v4 = *a2;
  }
  else
  {
    v5 = (volatile signed __int64 *)(a1 + 1080);
  }
  if ( (v4 & 4) != 0 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    if ( (*(_BYTE *)(a1 + 2171) & 0x38u) < 0x38 )
      *(_BYTE *)(a1 + 2171) ^= (*(_BYTE *)(a1 + 2171) ^ (*(_BYTE *)(a1 + 2171) + 8)) & 0x38;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)v8);
    v4 = *a2;
  }
  if ( (v4 & 8) != 0 )
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    *(_BYTE *)(a1 + 2171) |= 0x40u;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)v11);
  }
  ExtensionTable = (void (__fastcall **)(ULONG_PTR, struct _KTHREAD *, int *))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  if ( ExtensionTable )
  {
    (*ExtensionTable)(a1, KeGetCurrentThread(), a2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
  return 0LL;
}
