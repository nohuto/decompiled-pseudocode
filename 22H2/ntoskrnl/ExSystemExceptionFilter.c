/*
 * XREFs of ExSystemExceptionFilter @ 0x1407D4E30
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203110 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x1402ACCE0 (NtGetWriteWatch.c)
 *     NtSetInformationWorkerFactory @ 0x1402DBAE0 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140316278 (ExpGetSystemEmulationBasicInformation.c)
 *     NtShutdownWorkerFactory @ 0x140323380 (NtShutdownWorkerFactory.c)
 *     ExpGetSystemProcessorInformation @ 0x1403446E0 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140344ADC (ExpGetSystemBasicInformation.c)
 *     KeQuerySecureSpeculationInformation @ 0x14051B448 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140522428 (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140597420 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405B0CC8 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1405B1544 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1405B1AAC (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1405B1B14 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x1405B9730 (NtQueryInformationWorkerFactory.c)
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     sub_140666A00 @ 0x140666A00 (sub_140666A00.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     NtCreateEnclave @ 0x1408D3D70 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
