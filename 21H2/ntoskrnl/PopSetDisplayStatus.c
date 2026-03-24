/*
 * XREFs of PopSetDisplayStatus @ 0x14077A87C
 * Callers:
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402830D0 (PsGetProcessSessionIdEx.c)
 *     PopReleaseAdaptiveLock @ 0x14067DFA4 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x14067E094 (PopAcquireAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x1407819B8 (PopSetSessionDisplayStatus.c)
 */

_QWORD *__fastcall PopSetDisplayStatus(unsigned int a1)
{
  unsigned int ProcessSessionId; // ebx
  __int64 v3; // r8

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  LOBYTE(v3) = 1;
  PopSetSessionDisplayStatus(ProcessSessionId, a1, v3);
  return PopReleaseAdaptiveLock();
}
