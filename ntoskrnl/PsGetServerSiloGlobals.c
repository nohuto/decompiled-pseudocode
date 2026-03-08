/*
 * XREFs of PsGetServerSiloGlobals @ 0x1402992FC
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402E88D8 (SepRmDispatchDataToLsa.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     PspTerminateProcessesJobCallback @ 0x1406F8A00 (PspTerminateProcessesJobCallback.c)
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     ObClearProcessDeviceMap @ 0x140704918 (ObClearProcessDeviceMap.c)
 *     PspSetupUserProcessAddressSpace @ 0x14070733C (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x140707874 (MmMapApiSetView.c)
 *     SepIsMinTCB @ 0x14070E10C (SepIsMinTCB.c)
 *     ExpWnfResolveScopeInstance @ 0x14071A508 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x14071BF88 (ExpWnfGenerateStateName.c)
 *     ObDereferenceDeviceMap @ 0x14071E5A4 (ObDereferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x140720E70 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140721450 (ObpReferenceCurrentDeviceMap.c)
 *     MiSessionCreate @ 0x140756EC8 (MiSessionCreate.c)
 *     MiInitializeSessionGlobals @ 0x14075793C (MiInitializeSessionGlobals.c)
 *     PspCaptureUserProcessParameters @ 0x140759A00 (PspCaptureUserProcessParameters.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14077972C (ExpWnfEnumerateScopeInstances.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140785F3C (EtwpUpdateGlobalGroupMasks.c)
 *     ObpSetDeviceMap @ 0x14078990C (ObpSetDeviceMap.c)
 *     SepIsNgenImage @ 0x14078E8D4 (SepIsNgenImage.c)
 *     RtlGetHostNtSystemRoot @ 0x14079C490 (RtlGetHostNtSystemRoot.c)
 *     DbgkFlushErrorPort @ 0x1407E7AEC (DbgkFlushErrorPort.c)
 *     EtwpProcessEnumCallback @ 0x14080DD60 (EtwpProcessEnumCallback.c)
 *     DbgkpGetServerSiloState @ 0x14080F9D4 (DbgkpGetServerSiloState.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     PsBootPhaseComplete @ 0x140812760 (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpSetVersionData @ 0x140815CD8 (CmpSetVersionData.c)
 *     SepRmCommandServerThread @ 0x140825260 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1408254BC (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x14083BE04 (EtwpInitializeSiloState.c)
 *     EtwpPreInitializeSiloState @ 0x14084497C (EtwpPreInitializeSiloState.c)
 *     ObInitServerSilo @ 0x14085264C (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x140933D20 (DbgkInitializeServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x1409369A4 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140937000 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 *     ObShutdownSystem @ 0x140977E00 (ObShutdownSystem.c)
 *     PspCompleteServerSiloShutdown @ 0x1409A9AC8 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409A9B20 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x1409A9DE8 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AA0D0 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AA7BC (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AA8E8 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409AAA20 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409AAAF0 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x1409B05A4 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x1409B0C60 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x1409C5E50 (SeInitServerSilo.c)
 *     EtwInitializeSiloState @ 0x1409DF038 (EtwInitializeSiloState.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F5234 (ExpTimeZoneCleanupSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F52D8 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F53B0 (ExpTimeZoneWork.c)
 *     ExShutdownSystem @ 0x140AA79E8 (ExShutdownSystem.c)
 * Callees:
 *     <none>
 */

void *__fastcall PsGetServerSiloGlobals(__int64 a1)
{
  void *result; // rax

  result = &PspHostSiloGlobals;
  if ( a1 )
    return *(void **)(a1 + 1488);
  return result;
}
