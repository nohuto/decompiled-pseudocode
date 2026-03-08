/*
 * XREFs of ExUnlockUserBuffer @ 0x1402CFFD4
 * Callers:
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14075D2DC (ExpGetFirmwareEnvironmentVariable.c)
 *     ExLockUserBuffer @ 0x14075D5A4 (ExLockUserBuffer.c)
 *     NtSystemDebugControl @ 0x140791FE0 (NtSystemDebugControl.c)
 *     NtQueryBootEntryOrder @ 0x14083E080 (NtQueryBootEntryOrder.c)
 *     NtEnumerateBootEntries @ 0x14083E4F0 (NtEnumerateBootEntries.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085C154 (EtwQueryPerformanceTraceInformation.c)
 *     KdSystemDebugControl @ 0x14096F180 (KdSystemDebugControl.c)
 *     ExpGetHandleInformation @ 0x1409F36D4 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1409F3754 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1409F37D4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1409F3854 (ExpGetObjectInformation.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FB114 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateDriverEntries @ 0x1409FBD70 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1409FC230 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1409FC490 (NtQueryDriverEntryOrder.c)
 *     MiCopyLargeVad @ 0x140A466EC (MiCopyLargeVad.c)
 * Callees:
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}
