/*
 * XREFs of PoEnergyEstimationEnabled @ 0x1402384C0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     PsQueryProcessEnergyValues @ 0x1406B0B60 (PsQueryProcessEnergyValues.c)
 *     NtCreateJobObject @ 0x1406F7BA0 (NtCreateJobObject.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406F8590 (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1406F92F0 (PspQueryProcessAccountingInformationCallback.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1407C9E00 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PpmCheckReInit @ 0x1408265CC (PpmCheckReInit.c)
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140975AB0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 PoEnergyEstimationEnabled()
{
  return (unsigned __int8)PopEnergyEstimationEnabled;
}
