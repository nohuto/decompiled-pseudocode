/*
 * XREFs of EditionActivateMitInput @ 0x1C00FCD90
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C00FCE3C (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C00FD15C (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C00FD22C (WakeRIT.c)
 *     DitTakeOver @ 0x1C00FD28C (DitTakeOver.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 EditionActivateMitInput()
{
  unsigned int v0; // ebx
  CursorApiRouter *v1; // rcx

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
  _InterlockedExchange(&glDitMouseHandling, 1);
  gbNoMoreDITHitTest = 0;
LABEL_4:
  gbInMitRitHandOff = 0;
  EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters();
  CursorApiRouter::ForceSetCurrentCursorShape(v1);
  return v0;
}
