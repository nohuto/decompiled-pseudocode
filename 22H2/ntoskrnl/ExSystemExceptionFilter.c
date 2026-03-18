/*
 * XREFs of ExSystemExceptionFilter @ 0x140865F70
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9090 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemProcessorInformation @ 0x14033AD3C (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140346AAC (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140346C48 (ExpGetSystemBasicInformation.c)
 *     NtShutdownWorkerFactory @ 0x1403675A0 (NtShutdownWorkerFactory.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x14056ADAC (KeQueryDpcWatchdogConfiguration.c)
 *     KiValidateDpcWatchdogConfiguration @ 0x14056B488 (KiValidateDpcWatchdogConfiguration.c)
 *     KeQuerySecureSpeculationInformation @ 0x140573B88 (KeQuerySecureSpeculationInformation.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x1405B9510 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140604468 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x140604CD4 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x140605244 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1406052AC (EtwpGetSignedFieldValue.c)
 *     ExpQueryBootLoaderMetadata @ 0x140605818 (ExpQueryBootLoaderMetadata.c)
 *     ExpSetBootLoaderMetadata @ 0x140605910 (ExpSetBootLoaderMetadata.c)
 *     ExPoolQueryLimits @ 0x140607430 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140607774 (ExPoolSetLimit.c)
 *     NtQueryInformationWorkerFactory @ 0x14060F7A0 (NtQueryInformationWorkerFactory.c)
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     sub_140762650 @ 0x140762650 (sub_140762650.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
