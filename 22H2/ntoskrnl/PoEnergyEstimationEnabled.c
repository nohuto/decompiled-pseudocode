/*
 * XREFs of PoEnergyEstimationEnabled @ 0x1402056D0
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405E6290 (AlpcpCaptureAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x1405E92D0 (PsQueryProcessEnergyValues.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140616BE0 (PspQueryProcessAccountingInformationCallback.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x14068637C (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406902DC (PspFoldProcessAccountingIntoJob.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x14071E360 (NtCreateJobObject.c)
 *     PpmCheckReInit @ 0x1407BAFA4 (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2580 (NtAlpcImpersonateClientContainerOfPort.c)
 *     KiInitializeBootStructures @ 0x14099BA20 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
