/*
 * XREFs of ExUnlockUserBuffer @ 0x140206EC4
 * Callers:
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406875CC (ExpGetFirmwareEnvironmentVariable.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     NtSystemDebugControl @ 0x1407E1650 (NtSystemDebugControl.c)
 *     NtQueryBootEntryOrder @ 0x14083F3D0 (NtQueryBootEntryOrder.c)
 *     NtEnumerateBootEntries @ 0x14083F840 (NtEnumerateBootEntries.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860054 (EtwQueryPerformanceTraceInformation.c)
 *     KdSystemDebugControl @ 0x1409721A0 (KdSystemDebugControl.c)
 *     ExpGetHandleInformation @ 0x1409F6564 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1409F65E4 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1409F6664 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1409F66E4 (ExpGetObjectInformation.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FDFA4 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateDriverEntries @ 0x1409FEC70 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1409FF130 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1409FF390 (NtQueryDriverEntryOrder.c)
 *     MiCopyLargeVad @ 0x140A493BC (MiCopyLargeVad.c)
 * Callees:
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}
