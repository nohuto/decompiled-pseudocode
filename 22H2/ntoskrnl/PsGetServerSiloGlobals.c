/*
 * XREFs of PsGetServerSiloGlobals @ 0x140297574
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14031C948 (SepRmDispatchDataToLsa.c)
 *     PspTerminateProcessesJobCallback @ 0x1406A0B50 (PspTerminateProcessesJobCallback.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     SepIsMinTCB @ 0x1406B9B9C (SepIsMinTCB.c)
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x1406FC3C0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x1406FC9A0 (ObpReferenceCurrentDeviceMap.c)
 *     ExpWnfGenerateStateName @ 0x140711608 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x140713418 (ExpWnfResolveScopeInstance.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     DbgkFlushErrorPort @ 0x1407518F4 (DbgkFlushErrorPort.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A176C (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x1407A1CA4 (MmMapApiSetView.c)
 *     MiSessionCreate @ 0x1407A95BC (MiSessionCreate.c)
 *     MiInitializeSessionGlobals @ 0x1407AA030 (MiInitializeSessionGlobals.c)
 *     PspCaptureUserProcessParameters @ 0x1407ADC40 (PspCaptureUserProcessParameters.c)
 *     ObpSetDeviceMap @ 0x1407B006C (ObpSetDeviceMap.c)
 *     ObClearProcessDeviceMap @ 0x1407B0338 (ObClearProcessDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x1407B040C (ObDereferenceDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1407CA00C (ExpWnfEnumerateScopeInstances.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1407D53FC (EtwpUpdateGlobalGroupMasks.c)
 *     SepIsNgenImage @ 0x1407DD9F8 (SepIsNgenImage.c)
 *     RtlGetHostNtSystemRoot @ 0x1407EB230 (RtlGetHostNtSystemRoot.c)
 *     CmpSetVersionData @ 0x14080E008 (CmpSetVersionData.c)
 *     EtwpProcessEnumCallback @ 0x140827970 (EtwpProcessEnumCallback.c)
 *     SepRmCommandServerThread @ 0x14082D2D0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14082D52C (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x14083D0F4 (EtwpInitializeSiloState.c)
 *     ExpRefreshTimeZoneInformation @ 0x140840928 (ExpRefreshTimeZoneInformation.c)
 *     EtwpPreInitializeSiloState @ 0x140847ADC (EtwpPreInitializeSiloState.c)
 *     PsBootPhaseComplete @ 0x1408552CC (PsBootPhaseComplete.c)
 *     ObInitServerSilo @ 0x14085687C (ObInitServerSilo.c)
 *     DbgkpGetServerSiloState @ 0x140858F68 (DbgkpGetServerSiloState.c)
 *     CmpMountPreloadedHives @ 0x1408632CC (CmpMountPreloadedHives.c)
 *     DbgkInitializeServerSilo @ 0x140936D30 (DbgkInitializeServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x1409399C4 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x14093A020 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A32C (DbgkpSendErrorMessage.c)
 *     ObShutdownSystem @ 0x14097AEB0 (ObShutdownSystem.c)
 *     PspCompleteServerSiloShutdown @ 0x1409ACB48 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ACBA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACE68 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AD150 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD83C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AD968 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409ADAA0 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ADB70 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x1409B35F4 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x1409B3CB0 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x1409C8EA0 (SeInitServerSilo.c)
 *     EtwInitializeSiloState @ 0x1409E1ED8 (EtwInitializeSiloState.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F80C4 (ExpTimeZoneCleanupSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8168 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F8240 (ExpTimeZoneWork.c)
 *     ExShutdownSystem @ 0x140AAAC18 (ExShutdownSystem.c)
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
