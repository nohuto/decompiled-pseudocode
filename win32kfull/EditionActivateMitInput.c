// write access to const memory has been detected, the output may be wrong!
__int64 EditionActivateMitInput()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  CursorApiRouter *v2; // rcx

  v0 = 1;
  gbInMitRitHandOff = 1;
  AddThreadWakeEventDispatcherToIOCP();
  EtwTraceDitWaitForRitDisEngagement();
  WakeRIT(16LL);
  WaitForRitToCompleteLastCommand();
  if ( !gbMIT )
    goto LABEL_5;
  if ( !(unsigned int)DitTakeOver() )
  {
    gbMIT = 0;
    WakeRIT(8LL);
    WaitForRitToCompleteLastCommand();
LABEL_5:
    v0 = 0;
    goto LABEL_4;
  }
  WakeRIT(128LL);
  WaitForRitToCompleteLastCommand();
  _InterlockedAnd(gdwMITWakeReason, 0xFFFFFFFE);
  _InterlockedExchange((volatile __int32 *)(SGDGetUserSessionState(v1) + 15976), 1);
  gbNoMoreDITHitTest = 0;
LABEL_4:
  gbInMitRitHandOff = 0;
  EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters();
  CursorApiRouter::ForceSetCurrentCursorShape(v2);
  return v0;
}
