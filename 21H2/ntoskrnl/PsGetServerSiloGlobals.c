/*
 * XREFs of PsGetServerSiloGlobals @ 0x140285C94
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402400A8 (SepRmDispatchDataToLsa.c)
 *     ExpCenturyDpcRoutine @ 0x1402A4890 (ExpCenturyDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140394D40 (ExpTimeZoneDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1405B2700 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405D1AD0 (ExpTimeZoneCleanupSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     PspTerminateProcessesJobCallback @ 0x14060A430 (PspTerminateProcessesJobCallback.c)
 *     ObpSetDeviceMap @ 0x14061C8E4 (ObpSetDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14061FA28 (ExpWnfEnumerateScopeInstances.c)
 *     RtlGetHostNtSystemRoot @ 0x140622AA0 (RtlGetHostNtSystemRoot.c)
 *     ObDereferenceDeviceMap @ 0x14067BE28 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x14067C7F8 (DbgkFlushErrorPort.c)
 *     NtQueryInformationJobObject @ 0x1406804E0 (NtQueryInformationJobObject.c)
 *     ObQueryDeviceMapInformation @ 0x14068ED10 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x14068F1A4 (ObfDereferenceDeviceMap.c)
 *     PspCaptureUserProcessParameters @ 0x14069635C (PspCaptureUserProcessParameters.c)
 *     SepIsMinTCB @ 0x14069CBD4 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14069D860 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x14069EF64 (ExpWnfResolveScopeInstance.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406A122C (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x1406A1750 (MmMapApiSetView.c)
 *     SepIsNgenImage @ 0x1406F31D8 (SepIsNgenImage.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     MiSessionCreateInternal @ 0x140786DD0 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x140787660 (MiInitializeSessionGlobals.c)
 *     EtwpProcessEnumCallback @ 0x140797940 (EtwpProcessEnumCallback.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1407981D0 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwInitializeSiloState @ 0x14079ADF8 (EtwInitializeSiloState.c)
 *     CmpSetVersionData @ 0x1407A802C (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x1407A8ACC (PsBootPhaseComplete.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1407AD430 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407AD5B0 (SepRmLsaConnectRequest.c)
 *     ObInitServerSilo @ 0x1407C9400 (ObInitServerSilo.c)
 *     DbgkpGetServerSiloState @ 0x1407CAB0C (DbgkpGetServerSiloState.c)
 *     DbgkInitializeServerSilo @ 0x1408844E8 (DbgkInitializeServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140886BA4 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1408871D4 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x140906060 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409060C0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x140906398 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1409065D0 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906C20 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140906D4C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140906E74 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140906F44 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x14090B220 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x14091C234 (SeInitServerSilo.c)
 *     ExpTimeZoneWork @ 0x14094BDE0 (ExpTimeZoneWork.c)
 *     ExShutdownSystem @ 0x1409B3A88 (ExShutdownSystem.c)
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
