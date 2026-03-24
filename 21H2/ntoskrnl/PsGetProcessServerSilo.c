/*
 * XREFs of PsGetProcessServerSilo @ 0x14025CA80
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     EtwpWriteProcessEvent @ 0x140602B04 (EtwpWriteProcessEvent.c)
 *     NtCreateUserProcess @ 0x14060A1D0 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060D348 (PspEstimateNewProcessServerSilo.c)
 *     PspSetupUserProcessAddressSpace @ 0x14061177C (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x140611C68 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140611CA0 (MmMapApiSetView.c)
 *     ObQueryDeviceMapInformation @ 0x1406250A0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x1406256F0 (ObpReferenceDeviceMap.c)
 *     EtwTraceThread @ 0x14062955C (EtwTraceThread.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14062A95C (EtwpWriteAppStateChangeSummary.c)
 *     ObpDecrementHandleCount @ 0x14062CA04 (ObpDecrementHandleCount.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1406344E4 (CmpDoesProcessBelongToServiceSession.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     ObDereferenceDeviceMap @ 0x1406B0914 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x1406CDB68 (DbgkFlushErrorPort.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     PspTerminateAllThreads @ 0x1406D9E50 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1406DA1F0 (PspTerminateThreadByPointer.c)
 *     EtwpEnableGuid @ 0x1406E2404 (EtwpEnableGuid.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x1406F5660 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1406F5F60 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140720064 (PspValidateJobAssignmentSiloPolicy.c)
 *     EtwpProcessEnumCallback @ 0x140797740 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x1407AD3B0 (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140886A44 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140887370 (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x1408DF68C (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x140936E18 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x140937B88 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x140937C94 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409412CC (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 2160);
}
