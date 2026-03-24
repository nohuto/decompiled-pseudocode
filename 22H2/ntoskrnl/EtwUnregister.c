/*
 * XREFs of EtwUnregister @ 0x14075F9C0
 * Callers:
 *     BapdWriteEtwEvents @ 0x14039A928 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x1403CE9B8 (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 *     WmipGECleanup @ 0x1407723C0 (WmipGECleanup.c)
 *     PopBootLoaderTraceProcess @ 0x14077A018 (PopBootLoaderTraceProcess.c)
 *     WmipLegacyEtwWorker @ 0x1407C5780 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407C58E0 (WmipProcessLegacyEtwRegister.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x140882780 (TraceLoggingUnregister_EtwUnregister.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408878A0 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140887D6C (DbgkCaptureLiveDump.c)
 *     SSHSupportEtwUnregister @ 0x1408FBB08 (SSHSupportEtwUnregister.c)
 *     PsShutdownSystem @ 0x14090AA44 (PsShutdownSystem.c)
 *     BapdRecordFirmwareBootStats @ 0x140999250 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140A40EDC (BapdpRecordIumStatus.c)
 *     PerfDiagInitialize @ 0x140A41FEC (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140A72D90 (VslpIumInitializeTelemetry.c)
 *     SshpUninitialize @ 0x140A935A4 (SshpUninitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405FD448 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14067DEA8 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140939DF0 (EtwpEventWriteTemplateSessAndProv.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  struct _KTHREAD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rcx
  struct _KTHREAD *CurrentThread; // rax

  if ( !RegHandle )
    return -1073741816;
  if ( (*(_BYTE *)(RegHandle + 98) & 1) == 0 )
    KeBugCheckEx(0x11Du, 4uLL, RegHandle, 1uLL, 0LL);
  if ( *(_QWORD *)(RegHandle + 40) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 40) + 408LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 416LL) = KeGetCurrentThread();
  }
  v2 = KeGetCurrentThread();
  --v2->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = KeGetCurrentThread();
  v3 = *(_QWORD *)RegHandle;
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle
    || (v4 = *(_QWORD **)(RegHandle + 8), *v4 != RegHandle)
    || (*v4 = v3, *(_QWORD *)(v3 + 8) = v4, v5 = *(_QWORD *)(RegHandle + 16), *(_QWORD *)(v5 + 8) != RegHandle + 16)
    || (v6 = *(_QWORD **)(RegHandle + 24), *v6 != RegHandle + 16) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = 0LL;
  ExReleasePushLockEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  KeLeaveCriticalRegion();
  v7 = *(_QWORD *)(RegHandle + 40);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 416) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(RegHandle + 40) + 408LL, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
    EtwpEventWriteTemplateSessAndProv(
      v8,
      &ETW_EVENT_PROVIDER_UNREGISTERS,
      v9,
      1LL,
      0LL,
      *(_QWORD *)(RegHandle + 32) + 40LL);
  EtwpUnreferenceGuidEntry(*(__int64 **)(RegHandle + 32));
  v10 = *(__int64 **)(RegHandle + 40);
  if ( v10 )
    EtwpUnreferenceGuidEntry(v10);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
