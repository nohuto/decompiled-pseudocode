/*
 * XREFs of ExUnlockUserBuffer @ 0x1402EC94C
 * Callers:
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     ExLockUserBuffer @ 0x1406605D0 (ExLockUserBuffer.c)
 *     ExGetSessionPoolTagInformation @ 0x14066070C (ExGetSessionPoolTagInformation.c)
 *     NtSystemDebugControl @ 0x1407CFB20 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x1408B9BB0 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C4920 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1408D9D70 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937EBC (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140949FB0 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x14094A3D4 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x14094A454 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14094A4D4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x14094A554 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140950804 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x140951F1C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x140953360 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409539B0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140953E70 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140954190 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140954710 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}
