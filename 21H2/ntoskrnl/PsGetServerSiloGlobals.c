/*
 * XREFs of PsGetServerSiloGlobals @ 0x140252E18
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402C1C08 (SepRmDispatchDataToLsa.c)
 *     ExpCenturyDpcRoutine @ 0x14035F960 (ExpCenturyDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140394BF0 (ExpTimeZoneDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1405B24D0 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405D1AD0 (ExpTimeZoneCleanupSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     SepIsNgenImage @ 0x140603AA8 (SepIsNgenImage.c)
 *     PspCaptureUserProcessParameters @ 0x1406068CC (PspCaptureUserProcessParameters.c)
 *     SepIsMinTCB @ 0x14060D124 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14060DDB0 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F4B4 (ExpWnfResolveScopeInstance.c)
 *     PspSetupUserProcessAddressSpace @ 0x14061177C (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x140611CA0 (MmMapApiSetView.c)
 *     NtQueryInformationJobObject @ 0x140616880 (NtQueryInformationJobObject.c)
 *     ObQueryDeviceMapInformation @ 0x1406250A0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x140625534 (ObfDereferenceDeviceMap.c)
 *     PspTerminateProcessesJobCallback @ 0x1406ABD40 (PspTerminateProcessesJobCallback.c)
 *     ObDereferenceDeviceMap @ 0x1406B0914 (ObDereferenceDeviceMap.c)
 *     ObpSetDeviceMap @ 0x1406BD6D4 (ObpSetDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406C0B18 (ExpWnfEnumerateScopeInstances.c)
 *     RtlGetHostNtSystemRoot @ 0x1406C3EE0 (RtlGetHostNtSystemRoot.c)
 *     DbgkFlushErrorPort @ 0x1406CDB68 (DbgkFlushErrorPort.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     MiSessionCreateInternal @ 0x140786C10 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x1407874A0 (MiInitializeSessionGlobals.c)
 *     EtwpProcessEnumCallback @ 0x140797740 (EtwpProcessEnumCallback.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140797FD0 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwInitializeSiloState @ 0x14079ABF8 (EtwInitializeSiloState.c)
 *     CmpSetVersionData @ 0x1407A7E2C (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x1407A88CC (PsBootPhaseComplete.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9554 (ExpRefreshTimeZoneInformation.c)
 *     CmpMountPreloadedHives @ 0x1407AABF4 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1407AD230 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407AD3B0 (SepRmLsaConnectRequest.c)
 *     ObInitServerSilo @ 0x1407C90E0 (ObInitServerSilo.c)
 *     DbgkpGetServerSiloState @ 0x1407CA7EC (DbgkpGetServerSiloState.c)
 *     DbgkInitializeServerSilo @ 0x140884388 (DbgkInitializeServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140886A44 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140887074 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140887370 (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x140905F00 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140905F60 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x140906238 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x140906470 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906AC0 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140906BEC (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140906D14 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140906DE4 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x14090A9F4 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x14090B0C0 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x14091C0D4 (SeInitServerSilo.c)
 *     ExpTimeZoneWork @ 0x14094BC10 (ExpTimeZoneWork.c)
 *     ExShutdownSystem @ 0x1409B2B58 (ExShutdownSystem.c)
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
