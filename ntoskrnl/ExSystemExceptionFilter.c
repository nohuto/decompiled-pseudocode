/*
 * XREFs of ExSystemExceptionFilter @ 0x140861790
 * Callers:
 *     ExpGetSystemProcessorInformation @ 0x1402A71DC (ExpGetSystemProcessorInformation.c)
 *     NtGetWriteWatch @ 0x1402CA150 (NtGetWriteWatch.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1402DCACC (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1402DCC68 (ExpGetSystemBasicInformation.c)
 *     NtShutdownWorkerFactory @ 0x1402FC0D0 (NtShutdownWorkerFactory.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140366B30 (NtSetInformationWorkerFactory.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x14056890C (KeQueryDpcWatchdogConfiguration.c)
 *     KiValidateDpcWatchdogConfiguration @ 0x140568FE8 (KiValidateDpcWatchdogConfiguration.c)
 *     KeQuerySecureSpeculationInformation @ 0x140571664 (KeQuerySecureSpeculationInformation.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x1405B7060 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140602018 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x140602884 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x140602DF4 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x140602E5C (EtwpGetSignedFieldValue.c)
 *     ExpQueryBootLoaderMetadata @ 0x1406033C8 (ExpQueryBootLoaderMetadata.c)
 *     ExpSetBootLoaderMetadata @ 0x1406034C0 (ExpSetBootLoaderMetadata.c)
 *     ExPoolQueryLimits @ 0x140604FE0 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140605324 (ExPoolSetLimit.c)
 *     NtQueryInformationWorkerFactory @ 0x14060D380 (NtQueryInformationWorkerFactory.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     sub_140753BB4 @ 0x140753BB4 (sub_140753BB4.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
