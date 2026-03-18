/*
 * XREFs of PsGetServerSiloGlobals @ 0x140204738
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402037E8 (SepRmDispatchDataToLsa.c)
 *     SepIsMinTCB @ 0x14066F678 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14066FCE4 (ExpWnfGenerateStateName.c)
 *     SepIsNgenImage @ 0x140671B34 (SepIsNgenImage.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067259C (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x140672AD0 (MmMapApiSetView.c)
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     ObpSetDeviceMap @ 0x14069B8FC (ObpSetDeviceMap.c)
 *     ObClearProcessDeviceMap @ 0x14069C104 (ObClearProcessDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x14069C1E0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14069C820 (ObpReferenceCurrentDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x14069C9C0 (ObDereferenceDeviceMap.c)
 *     PspCaptureUserProcessParameters @ 0x14069D480 (PspCaptureUserProcessParameters.c)
 *     PspTerminateProcessesJobCallback @ 0x1406CA8B0 (PspTerminateProcessesJobCallback.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406D520C (EtwpUpdateGlobalGroupMasks.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406E2814 (ExpWnfEnumerateScopeInstances.c)
 *     MiInitializeSessionGlobals @ 0x1406E8EE8 (MiInitializeSessionGlobals.c)
 *     RtlGetHostNtSystemRoot @ 0x1406EB3B0 (RtlGetHostNtSystemRoot.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     ExpWnfResolveScopeInstance @ 0x140798334 (ExpWnfResolveScopeInstance.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     DbgkFlushErrorPort @ 0x1407DBF04 (DbgkFlushErrorPort.c)
 *     MiSessionCreateInternal @ 0x1407F336C (MiSessionCreateInternal.c)
 *     EtwpProcessEnumCallback @ 0x140814660 (EtwpProcessEnumCallback.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpSetVersionData @ 0x140834684 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x1408351BC (PsBootPhaseComplete.c)
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     SepRmCommandServerThread @ 0x14083B300 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14083B480 (SepRmLsaConnectRequest.c)
 *     EtwpPreInitializeSiloState @ 0x14084EB98 (EtwpPreInitializeSiloState.c)
 *     DbgkpGetServerSiloState @ 0x14084F044 (DbgkpGetServerSiloState.c)
 *     EtwpInitializeSiloState @ 0x140851114 (EtwpInitializeSiloState.c)
 *     ObInitServerSilo @ 0x140859318 (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x140927240 (DbgkInitializeServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140929940 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140929F90 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14092A29C (DbgkpSendErrorMessage.c)
 *     ObShutdownSystem @ 0x140983EF0 (ObShutdownSystem.c)
 *     PspCompleteServerSiloShutdown @ 0x1409ABBA8 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ABC00 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ABED8 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AC180 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AC86C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AC998 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409ACAD0 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ACBA0 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x1409B1740 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x1409C5A90 (SeInitServerSilo.c)
 *     EtwInitializeSiloState @ 0x1409DEF5C (EtwInitializeSiloState.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F80D4 (ExpTimeZoneCleanupSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8178 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F8250 (ExpTimeZoneWork.c)
 *     ExShutdownSystem @ 0x140A6C7A8 (ExShutdownSystem.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     <none>
 */

void *__fastcall PsGetServerSiloGlobals(__int64 a1)
{
  void *result; // rax

  result = &PspHostSiloGlobals;
  if ( a1 )
    return *(void **)(a1 + 1464);
  return result;
}
