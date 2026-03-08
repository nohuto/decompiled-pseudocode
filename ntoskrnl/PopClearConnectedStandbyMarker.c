/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x14097D6A8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopClearConnectedStandbyMarker(int a1)
{
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    *(_QWORD *)&PopBsdPowerTransition = 0LL;
    BYTE8(PopBsdPowerTransition) &= ~2u;
    BYTE11(PopBsdPowerTransition) ^= (BYTE11(PopBsdPowerTransition) ^ a1) & 0x3F;
    BYTE7(xmmword_140CF7850) = BYTE7(xmmword_140CF7850) & 0xF | (16 * HIBYTE(a1));
    PopBsdHandleRequest(3u);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
