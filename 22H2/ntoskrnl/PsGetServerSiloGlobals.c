/*
 * XREFs of PsGetServerSiloGlobals @ 0x140252678
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x1402F3000 (ExpCenturyDpcRoutine.c)
 *     SepRmDispatchDataToLsa @ 0x14034D558 (SepRmDispatchDataToLsa.c)
 *     ExpTimeZoneDpcRoutine @ 0x1403944F0 (ExpTimeZoneDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1405B2410 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405D1AD0 (ExpTimeZoneCleanupSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     SepIsNgenImage @ 0x140603AA8 (SepIsNgenImage.c)
 *     PspCaptureUserProcessParameters @ 0x140606D2C (PspCaptureUserProcessParameters.c)
 *     SepIsMinTCB @ 0x14060D584 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14060E210 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F914 (ExpWnfResolveScopeInstance.c)
 *     PspSetupUserProcessAddressSpace @ 0x140611BDC (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x140612100 (MmMapApiSetView.c)
 *     NtQueryInformationJobObject @ 0x140616CE0 (NtQueryInformationJobObject.c)
 *     ObQueryDeviceMapInformation @ 0x1406254C0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x140625954 (ObfDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x140630408 (DbgkFlushErrorPort.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     PspTerminateProcessesJobCallback @ 0x14068ECF0 (PspTerminateProcessesJobCallback.c)
 *     ObDereferenceDeviceMap @ 0x140693AD4 (ObDereferenceDeviceMap.c)
 *     ObpSetDeviceMap @ 0x1406A04E4 (ObpSetDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406A3528 (ExpWnfEnumerateScopeInstances.c)
 *     RtlGetHostNtSystemRoot @ 0x1406A6800 (RtlGetHostNtSystemRoot.c)
 *     MiSessionCreateInternal @ 0x140786B10 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x1407873A0 (MiInitializeSessionGlobals.c)
 *     EtwpProcessEnumCallback @ 0x1407925D0 (EtwpProcessEnumCallback.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140792E60 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwInitializeSiloState @ 0x140795A88 (EtwInitializeSiloState.c)
 *     CmpSetVersionData @ 0x1407A825C (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x1407A8CFC (PsBootPhaseComplete.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 *     CmpMountPreloadedHives @ 0x1407AB024 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1407AD670 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407AD7F0 (SepRmLsaConnectRequest.c)
 *     ObInitServerSilo @ 0x1407C9000 (ObInitServerSilo.c)
 *     DbgkpGetServerSiloState @ 0x1407CA70C (DbgkpGetServerSiloState.c)
 *     DbgkInitializeServerSilo @ 0x1408843D8 (DbgkInitializeServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140886A94 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1408870C4 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1408873C0 (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x140905F50 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140905FB0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x140906288 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1409064C0 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906B10 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140906C3C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140906D64 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140906E34 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x14090AA44 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x14090B110 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x14091C124 (SeInitServerSilo.c)
 *     ExpTimeZoneWork @ 0x14094BC60 (ExpTimeZoneWork.c)
 *     ExShutdownSystem @ 0x1409B2C98 (ExShutdownSystem.c)
 * Callees:
 *     <none>
 */

void *__fastcall PsGetServerSiloGlobals(__int64 a1)
{
  void *result; // rax

  result = &PspHostSiloGlobals;
  if ( a1 )
    return *(void **)(a1 + 1272);
  return result;
}
