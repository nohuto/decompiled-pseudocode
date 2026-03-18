/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x14080A09C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403697C8 (PopBsdHandleRequest.c)
 */

void __fastcall PopSetConnectedStandbyMarker(__int64 a1, int a2)
{
  __int64 v3; // rdi

  v3 = PopWnfCsEnterScenarioId;
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 2u;
    qword_140C548F8 = v3;
    BYTE10(PopBsdPowerTransition) ^= (a2 ^ BYTE10(PopBsdPowerTransition)) & 0x3F;
    byte_140C548F7 ^= (byte_140C548F7 ^ HIBYTE(a2)) & 0xF;
    PopBsdHandleRequest(3);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
