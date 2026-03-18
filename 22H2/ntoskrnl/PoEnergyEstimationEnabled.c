/*
 * XREFs of PoEnergyEstimationEnabled @ 0x1402C0B20
 * Callers:
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1406A0FA0 (PspQueryProcessAccountingInformationCallback.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140738400 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     PsQueryProcessEnergyValues @ 0x1407424E0 (PsQueryProcessEnergyValues.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1407DC730 (PspFoldProcessAccountingIntoJob.c)
 *     PpmCheckReInit @ 0x14082E63C (PpmCheckReInit.c)
 *     PpmEventTraceControlCallback @ 0x1408650B0 (PpmEventTraceControlCallback.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978B50 (NtAlpcImpersonateClientContainerOfPort.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 PoEnergyEstimationEnabled()
{
  return (unsigned __int8)PopEnergyEstimationEnabled;
}
