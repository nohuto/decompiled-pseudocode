/*
 * XREFs of PsGetProcessServerSilo @ 0x14025C2E0
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     EtwpWriteProcessEvent @ 0x140602B04 (EtwpWriteProcessEvent.c)
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060D7A8 (PspEstimateNewProcessServerSilo.c)
 *     PspSetupUserProcessAddressSpace @ 0x140611BDC (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x1406120C8 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140612100 (MmMapApiSetView.c)
 *     ObQueryDeviceMapInformation @ 0x1406254C0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x140625B10 (ObpReferenceDeviceMap.c)
 *     EtwTraceThread @ 0x14062997C (EtwTraceThread.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14062AD7C (EtwpWriteAppStateChangeSummary.c)
 *     DbgkFlushErrorPort @ 0x140630408 (DbgkFlushErrorPort.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x140642D80 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x140643680 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     ObDereferenceDeviceMap @ 0x140693AD4 (ObDereferenceDeviceMap.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1406AD2C4 (CmpDoesProcessBelongToServiceSession.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 *     ObpDecrementHandleCount @ 0x1406F6CE4 (ObpDecrementHandleCount.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     PspTerminateAllThreads @ 0x140707720 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x140707AC0 (PspTerminateThreadByPointer.c)
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14071F434 (PspValidateJobAssignmentSiloPolicy.c)
 *     EtwpProcessEnumCallback @ 0x1407925D0 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x1407AD7F0 (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140886A94 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1408873C0 (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x1408DF6DC (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x140936E68 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x140937BD8 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x140937CE4 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14094131C (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 2160);
}
