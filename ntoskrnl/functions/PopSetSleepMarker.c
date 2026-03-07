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
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
