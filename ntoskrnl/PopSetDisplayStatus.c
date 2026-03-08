/*
 * XREFs of PopSetDisplayStatus @ 0x140880858
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     PopAcquireAdaptiveLock @ 0x14073CCB4 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x14073CD60 (PopReleaseAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x14079A2F0 (PopSetSessionDisplayStatus.c)
 */

void __fastcall PopSetDisplayStatus(int a1)
{
  unsigned int ProcessSessionId; // ebx
  __int64 v3; // rdx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1, v3);
  PopSetSessionDisplayStatus(ProcessSessionId, a1, 1);
  PopReleaseAdaptiveLock();
}
