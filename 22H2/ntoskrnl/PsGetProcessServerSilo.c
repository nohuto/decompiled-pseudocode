/*
 * XREFs of PsGetProcessServerSilo @ 0x14028C060
 * Callers:
 *     PspValidateJobAssignmentSiloPolicy @ 0x14069F78C (PspValidateJobAssignmentSiloPolicy.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406B9020 (PspEstimateNewProcessServerSilo.c)
 *     ObpIncrementHandleCountEx @ 0x1406E7110 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x1406E7730 (ObpCloseHandle.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x1406FC3C0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x1406FC9A0 (ObpReferenceCurrentDeviceMap.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     ObpDecrementHandleCount @ 0x140740464 (ObpDecrementHandleCount.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140740BF0 (CmpDoesProcessBelongToServiceSession.c)
 *     DbgkFlushErrorPort @ 0x1407518F4 (DbgkFlushErrorPort.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1407543B0 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessEvent @ 0x1407555EC (EtwpWriteProcessEvent.c)
 *     PspTerminateAllThreads @ 0x14076D520 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14076DE90 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     EtwpEnableGuid @ 0x140780210 (EtwpEnableGuid.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A176C (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x1407A1C6C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1407A1CA4 (MmMapApiSetView.c)
 *     ObClearProcessDeviceMap @ 0x1407B0338 (ObClearProcessDeviceMap.c)
 *     EtwpProcessEnumCallback @ 0x140827970 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x14082D52C (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x1409399C4 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A32C (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x14097C4DC (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1409E6200 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E7068 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1409E7174 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F5694 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 2160);
}
