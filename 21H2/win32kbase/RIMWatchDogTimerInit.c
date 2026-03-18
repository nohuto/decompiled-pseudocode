/*
 * XREFs of RIMWatchDogTimerInit @ 0x1C017F3F0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 */

void __fastcall RIMWatchDogTimerInit(struct _KTIMER *a1)
{
  RIMLockExclusive((__int64)&gWatchDogQPCLock);
  if ( !a1 )
    gbWatchDogTimerArmed = 0;
  qword_1C029A188 = 0LL;
  gWatchDogTimer = a1;
  ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
  KeLeaveCriticalRegion();
}
