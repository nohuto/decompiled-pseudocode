/*
 * XREFs of EtwUnregister @ 0x14076F9E0
 * Callers:
 *     BapdWriteEtwEvents @ 0x140380290 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x1403AF870 (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     CarLoggingExit @ 0x1405D1050 (CarLoggingExit.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1405D11EC (McGenEventUnregister_EtwUnregister.c)
 *     DifEtwUnregisterWrapper @ 0x1405D4980 (DifEtwUnregisterWrapper.c)
 *     WmipLegacyEtwWorker @ 0x14084D950 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x14084DA68 (WmipProcessLegacyEtwRegister.c)
 *     DbgkpStartSystemErrorHandler @ 0x1409377EC (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x1409378F8 (DbgkCaptureLiveDump.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x14093E7C8 (TraceLoggingUnregister_EtwUnregister.c)
 *     PopBootLoaderTraceProcess @ 0x1409853E0 (PopBootLoaderTraceProcess.c)
 *     SSHSupportEtwUnregister @ 0x14099F498 (SSHSupportEtwUnregister.c)
 *     PsShutdownSystem @ 0x1409B05A4 (PsShutdownSystem.c)
 *     WmipGECleanup @ 0x1409DE780 (WmipGECleanup.c)
 *     EtwpCoverageSamplerStop @ 0x1409F08E4 (EtwpCoverageSamplerStop.c)
 *     VrpRegistryUnload @ 0x140A6F3C0 (VrpRegistryUnload.c)
 *     BapdRecordFirmwareBootStats @ 0x140A8BD14 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140B44430 (BapdpRecordIumStatus.c)
 *     PerfDiagInitialize @ 0x140B6C6B4 (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140B6E0BC (VslpIumInitializeTelemetry.c)
 *     ObpShutdownTraceLoggingProvider @ 0x140B93128 (ObpShutdownTraceLoggingProvider.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x140695094 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140695900 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408A20CA (EtwpEventWriteTemplateSessAndProv.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // rcx

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
  v3 = KeGetCurrentThread();
  --v3->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = KeGetCurrentThread();
  v4 = *(_QWORD *)RegHandle;
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle
    || (v5 = *(_QWORD **)(RegHandle + 8), *v5 != RegHandle)
    || (*v5 = v4, *(_QWORD *)(v4 + 8) = v5, v6 = *(_QWORD *)(RegHandle + 16), *(_QWORD *)(v6 + 8) != RegHandle + 16)
    || (v7 = *(_QWORD **)(RegHandle + 24), *v7 != RegHandle + 16) )
  {
    __fastfail(3u);
  }
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = 0LL;
  ExReleasePushLockEx((__int64 *)(*(_QWORD *)(RegHandle + 32) + 408LL), 0LL);
  KeLeaveCriticalRegion();
  v8 = *(_QWORD *)(RegHandle + 40);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 416) = 0LL;
    ExReleasePushLockEx((__int64 *)(*(_QWORD *)(RegHandle + 40) + 408LL), 0LL);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
    EtwpEventWriteTemplateSessAndProv(
      v9,
      &ETW_EVENT_PROVIDER_UNREGISTERS,
      v10,
      1LL,
      0LL,
      *(_QWORD *)(RegHandle + 32) + 40LL);
  EtwpUnreferenceGuidEntry(*(__int64 **)(RegHandle + 32));
  v11 = *(__int64 **)(RegHandle + 40);
  if ( v11 )
    EtwpUnreferenceGuidEntry(v11);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
