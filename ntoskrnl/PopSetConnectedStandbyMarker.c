/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x140879CCC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopSetConnectedStandbyMarker(__int64 a1, int a2)
{
  __int64 v3; // rdi

  v3 = PopWnfCsEnterScenarioId;
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 2u;
    *((_QWORD *)&xmmword_140CF7850 + 1) = v3;
    BYTE10(PopBsdPowerTransition) ^= (BYTE10(PopBsdPowerTransition) ^ a2) & 0x3F;
    BYTE7(xmmword_140CF7850) ^= (BYTE7(xmmword_140CF7850) ^ HIBYTE(a2)) & 0xF;
    PopBsdHandleRequest(3u);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
