/*
 * XREFs of PopSetDisplayStatus @ 0x140809408
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     PopSetSessionDisplayStatus @ 0x1407EDCAC (PopSetSessionDisplayStatus.c)
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EF120 (PopReleaseAdaptiveLock.c)
 */

void __fastcall PopSetDisplayStatus(int a1)
{
  unsigned int ProcessSessionId; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  PopSetSessionDisplayStatus(ProcessSessionId, a1, 1);
  PopReleaseAdaptiveLock();
}
