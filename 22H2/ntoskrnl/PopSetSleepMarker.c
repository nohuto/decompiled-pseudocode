/*
 * XREFs of PopSetSleepMarker @ 0x140981550
 * Callers:
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 *     PopGetTransitionsToOnCount @ 0x14059523C (PopGetTransitionsToOnCount.c)
 */

void __fastcall PopSetSleepMarker(char a1)
{
  __int16 TransitionsToOnCount; // bx

  TransitionsToOnCount = -1;
  if ( (unsigned int)PopGetTransitionsToOnCount() < 0xFFFF )
    TransitionsToOnCount = PopGetTransitionsToOnCount();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  WORD6(PopBsdPowerTransition) = TransitionsToOnCount;
  BYTE8(PopBsdPowerTransition) = (16 * a1) | BYTE8(PopBsdPowerTransition) & 0xF;
  BYTE14(PopBsdPowerTransition) = PopSleepCheckpointStatus & 0xF | BYTE14(PopBsdPowerTransition) & 0xF0;
  PopBsdHandleRequest(9u);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
