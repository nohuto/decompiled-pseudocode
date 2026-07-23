/*
 * XREFs of PsGetProcessServerSilo @ 0x14027DFF0
 * Callers:
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     ObpDecrementHandleCount @ 0x140663B94 (ObpDecrementHandleCount.c)
 *     ObDereferenceDeviceMap @ 0x14067BE28 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x14067C7F8 (DbgkFlushErrorPort.c)
 *     ObQueryDeviceMapInformation @ 0x14068ED10 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x14068F360 (ObpReferenceDeviceMap.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x14068F9C8 (CmpDoesProcessBelongToServiceSession.c)
 *     EtwTraceThread @ 0x14068FC44 (EtwTraceThread.c)
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14069CDF8 (PspEstimateNewProcessServerSilo.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406A122C (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x1406A1718 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406A1750 (MmMapApiSetView.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406A42DC (EtwpWriteAppStateChangeSummary.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     PspTerminateAllThreads @ 0x1406B1130 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1406B14D0 (PspTerminateThreadByPointer.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1406DBF40 (CmpCheckOpenAccessOnKeyBody.c)
 *     EtwpWriteProcessEvent @ 0x1406F2264 (EtwpWriteProcessEvent.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1406F6508 (PspValidateJobAssignmentSiloPolicy.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x14070D340 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     EtwpProcessEnumCallback @ 0x140797940 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x1407AD5B0 (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140886BA4 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x1408DF7EC (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x140936FE8 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x140937D58 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x140937E64 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14094149C (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 2160);
}
