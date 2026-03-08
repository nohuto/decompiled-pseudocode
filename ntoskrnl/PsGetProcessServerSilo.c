/*
 * XREFs of PsGetProcessServerSilo @ 0x1402637E0
 * Callers:
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406BF9CC (EtwpWriteAppStateChangeSummary.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1406CDA44 (CmpDoesProcessBelongToServiceSession.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140700C58 (PspValidateJobAssignmentSiloPolicy.c)
 *     ObClearProcessDeviceMap @ 0x140704918 (ObClearProcessDeviceMap.c)
 *     PspSetupUserProcessAddressSpace @ 0x14070733C (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x14070783C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140707874 (MmMapApiSetView.c)
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14070D590 (PspEstimateNewProcessServerSilo.c)
 *     ObQueryDeviceMapInformation @ 0x140720E70 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140721450 (ObpReferenceCurrentDeviceMap.c)
 *     ObpIncrementHandleCountEx @ 0x1407C1090 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpDecrementHandleCount @ 0x1407D8404 (ObpDecrementHandleCount.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     PspTerminateThreadByPointer @ 0x1407DA8F0 (PspTerminateThreadByPointer.c)
 *     PspTerminateAllThreads @ 0x1407DB73C (PspTerminateAllThreads.c)
 *     DbgkFlushErrorPort @ 0x1407E7AEC (DbgkFlushErrorPort.c)
 *     EtwpWriteProcessEvent @ 0x1407E9594 (EtwpWriteProcessEvent.c)
 *     EtwTraceThread @ 0x1407EBAB0 (EtwTraceThread.c)
 *     EtwpProcessEnumCallback @ 0x14080DD60 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x1408254BC (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x1409369A4 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x14097942C (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1409E3360 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E41C8 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1409E42D4 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F2804 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 2160);
}
